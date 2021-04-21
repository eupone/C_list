#ifndef LIST_YEET
#define LIST_YEET



// list structure
typedef struct  {
	void	*before;
	void	*elem;
	void	*after;
} Element ;

typedef struct  {
	Element *first;
	int nbr_element;
	Element *last_elem;
} List;

// end of list structure



List *init(void * first_var); // init the list

void add(List *liste,void* elem); // add an element at the end of the list

void fdel(List *liste,int pos);	// found and del an element by parsing in forwards
void del(List *liste,int pos); 	// found and del an element by parsing in auto
void rdel(List *liste,int pos);	// found and del an element by parsing in reverse

void finsert(List *liste,int pos,void *elem); 	// insert a new element by parsing in forward (except for last and first element)
void insert(List *liste,int pos,void *elem); 	// insert a new element by parsing in automode (except for last and first element)
void rinsert(List *liste,int pos,void *elem); 	// insert a new element by parsing in reverse (except for last and first element)

void *rret(List *liste , int pos);	// retrieve an element by parsing in forward
void *ret(List *liste , int pos); 	// retrieve an element by parsing in auto
void *fret(List *liste , int pos);	// retrieve an element by parsing in reverse

void *rpop(List *liste , int pos);	// pop an element by parsing in forward
void *pop(List *liste , int pos); 	// pop an element by parsing in auto
void *fpop(List *liste , int pos);	// pop an element by parsing in reverse

#endif