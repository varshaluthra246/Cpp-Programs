//Function Template
#include<iostream>
#include<conio.h>
using namespace std;
template <class T>
int add(T a,T b)
{ 
   cout<<"\n Sum is : "<<(a+b); 
}
int main()
{
 add(5,10);
 add(2.5,3.5);

 return 0;
}
