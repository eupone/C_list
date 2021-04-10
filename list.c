#include<stdlib.h>
#include<stdio.h>
#include "list.h"



List *init(void *first_var){

        List *the_list = malloc( sizeof(List) );
        Element *first_elem = malloc( sizeof(Element) );

        if (the_list == NULL || first_elem == NULL)
        {
            if (the_list == NULL){
                printf("no memory or error when creating the list\n");
                return NULL;
            }
            else if (first_elem == NULL){
                printf("no memory or error when creating the first element\n");
                return NULL;
            }
        }



        the_list -> first = first_elem ;
        the_list -> nbr_element = 1 ;
        the_list -> last_elem = first_elem ;

        first_elem -> before = NULL ;
        first_elem -> elem = first_var ;
        first_elem -> after = NULL ;
        return the_list ;
}



void add(List *liste,void *element){
    if( liste == NULL ){
        printf("the list does not exist\n");
        return;
    }

    Element *actual_last_elem = liste -> last_elem ;
    Element *new_elem = malloc( sizeof(Element) ); 

    if( new_elem == NULL ){
        printf("no memory or error when creating the element\n");
        return;
    }

    new_elem -> elem = element;
    new_elem -> before = actual_last_elem;

    actual_last_elem -> after = new_elem;

    liste -> last_elem = new_elem;
    liste -> nbr_element++ ;

}



void del(List *liste,int pos){

    if (liste == NULL){
        printf("the list does not exist\n");
       return;
    }


    if (pos >= 0 && pos < liste->nbr_element ){

        Element *pos_elem = liste -> first ;


        if (pos == 0){ //if pos at the first elem

            Element *aft = pos_elem -> after;
            aft -> before = NULL;

            free(pos_elem);

            liste -> first = aft;
            liste -> nbr_element-- ;


        }else if (pos == (liste-> nbr_element - 1) ){ //if element is the last of the list 
            
            Element *pos_elem =  liste -> last_elem;
            Element *bft = pos_elem -> before;

            bft -> after = NULL;
            free(pos_elem);

            liste -> last_elem = bft;
            liste -> nbr_element-- ;

        }else{

            for (int i=0 ; i < pos ;i++){

                if (pos_elem -> after != NULL){
                    pos_elem = pos_elem -> after;
                     
                }else{
                    pos_elem = NULL;
                }
                if (pos_elem == NULL){
                    printf("off the list\n");
                    return;
                }

            }



            Element *aft = pos_elem -> after ;
            Element *bft = pos_elem -> before;


            aft -> before = bft;
            bft -> after = aft;

            free(pos_elem);

            liste -> nbr_element--;

        }

    }else{
        printf("out of range\n");
        return;
    }

    
}



void insert(List *liste,int pos,void *element){
    if( liste == NULL ){
        printf("the list does not exist\n");
        return;
    }


    if (pos >= 0 && pos < liste->nbr_element ){

        Element *pos_elem = liste -> first ;


        if (pos == 0){ //if pos at the first elem
            

            Element *new_elem = malloc( sizeof(Element) );

            if( new_elem == NULL ){
                 printf("no memory or error when creating the element\n");
                 return;
            }

            Element *aft = pos_elem;
            aft -> before = new_elem;

            new_elem -> elem = element;
            new_elem -> after = aft;

            liste -> first = new_elem;
            liste -> nbr_element++ ;



        }else if (pos == (liste-> nbr_element - 1) ){ //if element is the last of the list 

            Element *bft =  liste -> last_elem;

            Element *new_elem = malloc( sizeof(Element) );

            if( new_elem == NULL ){
                 printf("no memory or error when creating the element\n");
                 return;
            }

            new_elem -> elem = element;
            new_elem -> before = bft;
            bft -> after = new_elem;
            

            liste -> last_elem = new_elem;
            liste -> nbr_element++ ;



        }else{


            for (int i=0 ; i < pos-1 ;i++){

                if (pos_elem -> after != NULL){
                    pos_elem = pos_elem -> after;
                     
                }else{
                    pos_elem = NULL;
                }
                if (pos_elem == NULL){
                    printf("off the list\n");
                    return;
                }

            }


            Element *new_elem = malloc( sizeof(Element) );

            if( new_elem == NULL ){
                 printf("no memory or error when creating the element\n");
                 return;
            }


            Element *aft = pos_elem -> after ;
            Element *bft = pos_elem;

            new_elem -> elem = element;

            aft -> before = new_elem;
            pos_elem  -> after = new_elem;

            new_elem -> before = pos_elem;
            new_elem -> after = aft;

            liste -> nbr_element++;

        }

    }else{
        printf("out of range\n");
        return;
    }

}



void *ret(List *liste , int pos){
    if( liste == NULL ){
        printf("the list does not exist\n");
        return NULL;
    }
    if (pos > liste->nbr_element){
        printf("out of range\n");
        return NULL;
    }

    Element *pos_elem = liste->first;


    for (int i=0 ; i<pos ;i++){
        if (pos_elem -> after != NULL){
            pos_elem = pos_elem -> after;
        }
        else {
            return NULL;
        }

        if (pos_elem == NULL){
            printf("off the list\n");
            exit(EXIT_FAILURE);
        }
    }
    void *yeet = pos_elem -> elem;
    return pos_elem -> elem;

}



void *pop(List *liste , int pos){
    if (pos > liste->nbr_element){
        printf("out of range\n");
        return NULL;
    }
    void *cast = ret(liste , pos);
    del(liste , pos);
    return cast;

}