//Use of Manipulators..
#include<iostream>
#include<conio.h>
#include<iomanip>   //for setw
using namespace std;
int main()
{
	int Basic = 950, allowance = 95, Total = 1045;
	cout<<setw(10)<<"Basic"<<setw(10)<<Basic<<endl
	<<setw(10)<<"Allowance"<<setw(10)<<allowance<<endl<<
	setw(10)<<"Total"<<setw(10)<<Total<<endl;
	return 0;
}
