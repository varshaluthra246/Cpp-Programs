#include<stdio.h> 
#include<stdlib.h> 
#define NULL 0 
struct linked_list 
{ 
 int data; 
 struct linked_list *next; 
}; 
typedef struct linked_list list; 
void main() 
{ 
 list *head; 
 void create(list *); 
 int count(list *); 
 void traverse(list *); 
 head=(list *)malloc(sizeof(list)); 
 create(head); 
 printf(" \n traversing the list \n"); 
 traverse(head); 
 printf("\n number of elements in the list %d \n", count(head)); 
}
/*prototypes of insert and find functions */ 
list * insert_list(list *); 
list * find(list *, int); 
/*definition of insert function */ 

list * insert_list(list *start) 
{ 
list *n, *f; 
int key, element; 
printf("enter value of new element"); 
scanf("%d", &element); 
printf("eneter value of key element"); 
 scanf("%d",&key); 
 if(start->data ==key) 
 { 
 n=(list *)mallo(sizeof(list)); 
 n->data=element; 
 n->next = start; 
 start=n; 
 } 
 else 
 { 
f = find(start, key);
if(f == NULL) 
printf("\n key is not found \n"); 
 else 
 {
 n=(list*)malloc(sizeof(list)); 
 n->data=element; 
 n->next=f->next; 
 f->next=n; 
 }
 } 
 return(start); 
} 
/*definition of find function */ 
list * find(list *start, int key)
{ 
if(start->next->data == key)
 return(start); 
 if(start->next->next == NULL) 
 return(NULL); 
 else 
 find(start->next, key); 
} 
void main() 
{ 
list *head; 
void create(list *); 
int count(list *); 
void traverse(list *); 
 head=(list *)malloc(sizeof(list)); 
 create(head); 
printf(" \n traversing the created list \n"); 
 traverse(head); 
printf("\n number of elements in the list %d \n", count(head)); 
 head=insert_list(head); 
printf(" \n traversing the list after insert \n"); 
 traverse(head); 
} 
