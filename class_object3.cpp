
//finding the largest of n given number
//Nesting of Member Functions
#include<iostream>
using namespace std;
#define MAX_SIZE 100
class Data
{
int num[MAX_SIZE];
int n;
public:
void get_data(void); //declaration
int largest(void); //declaration
void display(void); //declaration
};
void Data :: get_data(void)
{
cout<< "\n Enter the total numbers(n):"<<endl;
cin>>n;
cout<< "\n Enter the number:"<<endl;
for (int i=0;i<n; i++)
{
cout<< "\n Enter the numer"<<i+1<<": ";
cin>>num[i];
}
}
int Data :: largest(void)
{
int max;
max=num[0];
for(int i=1; i<n; i++)
{
if (max<num[i])
max=num[i];
}
return max;
}
void Data :: display(void)
{
cout<<"The largest number:"<<largest()<<endl;
}
int main()
{
Data num;
num.get_data();
num.display();
}

