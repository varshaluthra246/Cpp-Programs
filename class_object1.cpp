//program:employee.cpp
#include<iostream>
using namespace std;
class Employee
{
int id, age;
//int age;
char name[25];
public:
int salary;
void get_data()
{
cout<<"Enter ID :"<<endl;
cin>>id;
cout<<"Enter Name:"<<endl;
cin>>name;
cout<<"Enter Age:"<<endl;
cin>>age;
cout<<"Enter Salary :"<<endl;
cin>>salary;
}
void display_info()
{
cout<<"\nID :" <<id<<endl;
cout<<"Name :"<<name<<endl;
cout<<"Age :"<<age<<endl;
cout<<"Salary :"<<salary<<endl;
}
};
int main()
{
Employee e1; // first object/variable of a Employee class
Employee e2; // second object/variable of a Employee class
Employee e3;
cout<<"\nEnter 1st Employee Basic Information:"<<endl;
e1.get_data(); // object e1 calls member get_data()
cout<<"\nEnter 2nd Employee Basic Information:"<<endl;
e2.get_data(); // object e2 calls member get_data()
cout<<"\nEnter 3rd Employee Basic Information:"<<endl;
e3.get_data();
cout<<"\n1st Employee Basic Information:"<<endl;
e1.display_info(); // object e1 calls member display_info()
cout<<"\n 2nd Employee Basic Information:"<<endl;
e2.display_info(); // object e2 calls member display_info()
cout<<"\n 3rd Employee Basic Information:"<<endl;
e3.display_info();
}

