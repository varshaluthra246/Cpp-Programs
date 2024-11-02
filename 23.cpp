//delete operator
#include<iostream>
#include<conio.h>
using namespace std;
class A
{  public:
        int x;
        int y;
   A( ) 
  { 
     x=10; 
     y=20; 
  }
  void display( )
  { 
      cout<<x<<endl<<y<<endl;
  }
};
int main( )
{   A *ptr;
 ptr=new A;
 cout<<ptr->x<<endl;
 cout<<ptr->y<<endl;
 ptr->display();
 delete ptr;
 return 0;
}

