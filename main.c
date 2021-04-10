#include<stdlib.h>
#include<stdio.h>
#include "list.h"




int main(void)
{

	char *un_str = "oui";

	List *yeet = init(un_str); // you have to init the list with an element

	char* ty = "ty";
	add(yeet,ty); // add an element to the list

	char *salut = "salut";
	add(yeet,salut);
	char *exact = "exact";
	add(yeet,exact);

	add(yeet,"abricot sec"); // you can directly add string
	add(yeet,"sardoche ");
	add(yeet,"voiture");
	add(yeet,"oui oui oui");
	add(yeet,"avec un peu de chance ....");



	

	printf("------------------------------------------\n");

	for(int i=0 ; i < yeet -> nbr_element ;i++){   // print all the liste content
		char *cast = NULL;
		cast = ret(yeet,i); // retrieve an element
		printf("%s\n", cast);
	}

	printf("------------------------------------------\n");

	insert(yeet,1,"bah oui"); // insert an element
	char* gg = pop(yeet,2);   // pop an element
	printf("%s\n", gg);

	printf("------------------------------------------\n");

	for(int i=0 ; i < yeet -> nbr_element ;i++){
		char *cast = NULL;
		cast = ret(yeet,i);
		printf("%s\n", cast);
	}

	printf("------------------------------------------\n");
	printf("end\n");


    return 0;

}