/* Operators in C++
1. scope resolution operator :: 
2. pointer-to-member declaration ::*
3. pointer-to-member operator ->*
4. pointer-to-member operator .*
5. delete = memory releases operator
6. endl = line feed operator
7. new = memeory allocation operator
setw = field width operator
*/
// SCOPE RESOLUTION OPERATOR:
#include<iostream>
#include<conio.h>
using namespace std;
int m = 10; 							//global m
int main()
{
	int m =20;  						//m redeclared, local to main
	{
		int k = m;
		int m= 30;  		//m declared again, local to inner block
		cout<<"we are in inner block \n";
		cout<<"k="<<k<<"\n";
		cout<<"m="<<m<<"\n";
		cout<<" ::m"<<::m<<"\n";
	}
	cout<<"\n we are in outer block\n";
	cout<<"m= "<<m<<"\n";
	cout<<" ::m"<<::m<<"\n";
	return 0;
}
