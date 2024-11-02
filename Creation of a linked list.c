#include <stdio.h> 
typedef struct node 
{ 
 int data; 
 struct node *next; 
} list; 
int main() 
{ 
 list *head = NULL; /* initialize list head to NULL */ 
 if (head == NULL) 
 { 
 printf("The list is empty!\n"); 
 } 
} 
