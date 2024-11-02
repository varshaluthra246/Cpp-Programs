/* The program accepts a matrix as input and prints the 3-tuple representation 
of it*/ 
#include<stdio.h> 
void main() 
{ 
 int a[5][5],rows,columns,i,j; 
 
printf("enter the order of the matrix. The order should be less than 5 × 5:\n"); 
 scanf("%d %d",&rows,&columns); 
printf("Enter the elements of the matrix:\n"); 
 
for(i=0;i<rows;i++) 
 for(j=0;j<columns;j++) 
 
 { scanf("%d",&a[i][j]); 
 } 
 printf("3-D Representation:")
 for(i=0;i<rows;i++) 
 for(j=0;j<columns;j++) 
 
 { scanf("%d",&a[i][j]); 
 } 
 printf("The 3-tuple representation of the matrix is:\n"); 
 
for(i=0;i<rows;i++) 
 for(j=0;j<columns;j++) 
 {
 if (a[i][j]!=0)
 {
printf("%d %d %d\n", (i+1),(j+1),a[i][j]); 
 }
 }
}
/*
A 3- tuple representation means that matrices are stored 
in the form of a 2-dimensional array, with three columns 
and the number of rows the same as the no. of non-zero 
elements in the matrix.
*/
