#include<iostream>
using namespace std;
class complex
{
int real, imaginary;
public:
complex()
{
}
complex(int a, int b)
{
real = a;
imaginary = b;
}
void operator-();
void display()
{
cout<<"Real value?"<<real<<endl;
cout<<"imaginary value?"<<imaginary<<endl;
}
};
void complex::operator-()
{
real = -real;
imaginary = -imaginary;
}
int main()
{
complex c1(10,12);
cout<< "-real and imaginary value befor operation?"<<endl;
c1.display();
c1; //c1- /*It will give error*/
cout<< "-real and imaginary‘ value after operation?"<<endl;
c1.display();

}
