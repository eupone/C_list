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

void del(List *liste,int pos); // found and del an element by parsing in forwards

void insert(List *liste,int pos,void *elem); // insert a new element by parsing in forward (except for last and first element)

void *ret(List *liste , int pos); // retrieve an element by parsing in forward

void *pop(List *liste , int pos); // pop an element by parsing in forward


#endif