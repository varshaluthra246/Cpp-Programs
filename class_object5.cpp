//friend class
#include <iostream>  
using namespace std;
//A friend class can access both private and protected members 
//of the class in which it has been declared as friend.  
  
class A  
{  	//public:
    int x =5;  
    friend class B;           // friend class.  
};  
class B  
{  
  public:  
    void display(A &a)  
    {  
        cout<<"value of x is : "<<a.x;  
    }  
};  
int main()  
{  
    A a;  
    B b;  
    b.display(a);  
    return 0;  
} 
