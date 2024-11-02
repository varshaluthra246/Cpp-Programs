//A simple C++ Program
// Use of Class in C++
#include<iostream>
#include<conio.h>
using namespace std;
class person
{
	char name[30];
	int age;
	public:
		void getdata(void);
		void display(void);
};
void person :: getdata(void)
{
	cout<<"enter name: "<<endl;
	cin>>name;
	cout<<"enter age:"<<endl;
	cin>>age;
}
void person :: display(void)
{
	cout<<"\n name = "<<name<<endl;
	cout<<"\n age = "<<age<<endl;
}
int main()
{
	person p;
	p.getdata();
	p.display();
	return 0;
}

