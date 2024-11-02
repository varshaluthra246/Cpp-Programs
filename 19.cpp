//Generic class
#include<iostream>
#include<conio.h>
using namespace std;
template <class T>
class mytempclass
{
  private:
  T x;
  public:
  void getdata( ) { cout<<"\n Enter data " ; cin>>x; }
  void display( ) { cout<<"\n x : "<<x; }
};
int main()
{ mytempclass<int> obj; 
   obj.getdata( );   obj.display( );
  mytempclass<char> obj2; obj.getdata( ); obj.display();
  return 0;
}

