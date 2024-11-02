//ponter to the object
#include<iostream>
#include<conio.h>
using namespace std;
class A
{  public:
    int x;
    int y;
  A( ) { 
     x=10; 
     y=20; }
  void display()
  { cout<<x<<endl<<y<<endl; }
};
int main()
{ A a1;
  A *ptr;
 ptr = &a1;
 cout<<ptr->x<<endl;
 cout<<ptr->y<<endl;
 ptr->display();
 return 0;
}

