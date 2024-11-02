#include<iostream>
#include<conio.h>
using namespace std;
class complex
{
int real, imaginary;
public:
complex()
{
}
complex(int a,int b)
{
real = a;
imaginary = b;
}
void operator +(complex c);
};
void complex::operator+(complex c)
{
complex temp;
temp.real = real + c.real;
temp.imaginary = imaginary + c.imaginary;
cout<<"real sum is?"<<temp.real<<endl;
}
int main()
{

complex c1(10,20);
complex c2(20,30);
c1+c2;

}

