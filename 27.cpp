//Multiple Catch
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{ int k ; cin>>k;
try {
  if (k<0)
   throw k;
  else
   throw "works";
} catch(int j) { cout<<"integer thrown"<<j<<endl ; }
catch(char *c) { cout<<"char thrown"<<c<<endl; }
return 0;
}  

