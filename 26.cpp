//Exception Handling
#include<iostream>
#include<conio.h>
using namespace std;
void test( )
{
   cout<<"Inside function"<<endl;
   throw 100;
}
int main()
{ cout<<"The program starts"<<endl;
try { 
   cout<<"Inside try block"<<endl;
    test( );
   cout<<"This will not execute"<<endl ;
} 
catch(int k) 
{ cout<<"Caught::"<<k ; } 
return 0;
}

