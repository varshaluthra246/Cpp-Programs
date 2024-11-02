//g C++ program for addition and multiplication of two square Objects 
//and Classes matrices
#include<iostream>
using namespace std;
#define MAX_SIZE 10
int n;
class Matrix
{
int item[MAX_SIZE][MAX_SIZE];
public:
void get_matrix();
void display_matrix();
Matrix add(Matrix m);// Matrix object as argumentand as return: pass by value
void mul(Matrix &mat, Matrix m);// Matrix object as argument: pass by 
//reference and pass by value
};
void Matrix :: get_matrix(void)
{
cout<< "\n Enter the order of square matrix(nXn):"<<endl;
cin>>n;
cout<< "\n Enter the element of matrix:"<<endl;
for (int i=0;i<n; i++)
for (int j=0;j<n; j++)
cin>>item[i][j];
}
void Matrix :: display_matrix(void)
{
cout<<"\n The element of matrix is :"<<endl;
for (int i=0;i<n; i++)
{
for (int j=0;j<n; j++)
cout<<item[i][j]<<"\t";
cout<<endl;
}
}
Matrix Matrix :: add(Matrix m)
{
Matrix temp; // object temp of Matrix class
for (int i=0;i<n; i++)
for (int j=0;j<n; j++)
temp.item[i][j]=item[i][j]+m.item[i][j];
return (temp); // returm matrix object
}
void Matrix :: mul(Matrix &rm, Matrix m)
{
for (int i=0;i<n; i++)
for (int j=0;j<n; j++)
{
rm.item[i][j]=0;
for(int k=0; k<n; k++)
rm.item[i][j]=rm.item[i][j]+item[i][k]*m.item[k][j];
}
}
int main()
{
Matrix X, Y, Result;
cout<<"Matrix X :"<<endl;
X.get_matrix();
cout<<"Matrix Y :"<<endl;
Y.get_matrix();
cout<<"\n Addition of X & Y :"<<endl;
Result=X.add(Y);
Result.display_matrix();
cout<<"\n Multiplication of X & Y :"<<endl;
X.mul(Result,Y); //result=X*Y
Result.display_matrix();
}
