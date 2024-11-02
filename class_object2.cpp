// the complete C++ program to find out the minimum and maximum of 
//three given integer numbers:
#include<iostream>
using namespace std;
class Number
{
int x, y, z;
public:
void get_data(void); //declaration
void maximum(void); //declaration
void minimum(void) //definition
{
int min;
min=x;
if (min>y)
min=y;
if (min>z)
min=z;
cout<<"\n Minimum value is ="<<min<<endl;
}
};
void Number :: get_data(void)
{
cout<< "\n Enter the value of fist number(x):"<<endl;
cin>>x;
cout<< "\n Enter the value of second number(y):"<<endl;
cin>>y;
cout<< "\n Enter the value of third number(z):"<<endl;
cin>>z;
}
void Number :: maximum(void)
{
int max;
max=x;
if (max<y)
max=y;
if (max<z)
max=z;
cout<<"\n Maximun value is ="<<max<<endl;
}
int main()
{
Number num;
num.get_data();
num.minimum();
num.maximum();
}


