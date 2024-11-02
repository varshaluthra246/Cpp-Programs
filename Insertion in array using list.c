/* Inserting an element into contiguous list (Linear Array) at specified position */ 
/* contiguous_list.C */ 
# include<stdio.h> 
/* definition of linear list */ 
typedef struct 
{ 
 int data[10]; 
 int count; 
}list; 
/*prototypes of functions */ 
void insert(list *, int, int); 
void create(list *); 
void traverse(list *); 
/* Definition of the insert funtion */ 
void insert(list *start, int position, int element) 
{ 
 int temp = start->count; 
 while( temp >= position) 
 { 
 start->data[temp+1] = start->data[temp]; 
 temp --; 
 } 
 start->data[position] = element; 
 start->count++ ; 
} 
/* definition of create function to READ data values into the list */ 
void create(list *start) 
{ 
 int i=0, test=1; 
 while(test) 
 { 
 //fflush(stdin); 
 printf("\n input value value for: %d:(zero to come out) ", i); 
 scanf("%d", &start->data[i]); 
 if(start->data[i] == 0) 
 test=0; 
 else 
 i++; 
 } 
 start->count=i; 
} 
/* OUTPUT FUNCTION TO PRINT ON THE CONSOLE */ 
void traverse(list *start) 
{ 
 int i; 
 for(i = 0; i< start->count; i++) 
 { 
 printf("\n Value at the position: %d: %d ", i, start->data[i]); 
 } 
} 
/* main function */ 
void main() 
{ 
 int position, element; 
 list l; 
 create(&l); 
 printf("\n Entered list as follows:\n"); 
 //fflush(stdin); 
 traverse(&l); 
	//fflush(stdin); 
 printf("\n input the position where you want to add a new data item:"); 
 scanf("%d", &position); 
 //fflush(stdin); 
 printf("\n input the value for the position:"); 
 scanf("%d", &element); 
 insert(&l, position, element); 
 traverse(&l);
}
