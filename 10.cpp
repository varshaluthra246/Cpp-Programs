//Constructors in C++
#include<iostream>
using namespace std;
class integer
{
	int m,n;
	public:
		integer(int, int);
		void display(void)
		{
			cout<<"m="<<m<<endl;
			cout<<"n="<<n<<endl;
		}
};
integer :: integer (int x, int y)
{
	m=x; n=y;
}
int main()
{  integer int1(0,100);
integer int2(25,75); //constructor
cout<<"***object1***"<<endl;
int1.display();
cout<<"***object2***"<<endl;
int2.display();
return 0;
}
