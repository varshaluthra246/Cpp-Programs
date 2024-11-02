//overloading Function template:
#include<iostream>
#include<conio.h>
using namespace std;
template <class T>
int add(T a,T b)
{    cout<<"\n Sum is : "<<(a+b); }
int add(char a,char b)
{ cout<<"Concatenation :"<<a<<b; }
int main()
{ 
add(5,10); 
add(2.5,3.5); 
add('f','g');
return 0;  
}

