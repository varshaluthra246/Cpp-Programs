//C++ Function Overriding
#include <iostream>  
using namespace std;  
class Animal {  
    public:  
void Name(){    
cout<<"Varsha Luthra...";    
    }      
};   
class last_name: public Animal    
{    
 public:  
 void eat()    
    {    
       cout<<"Varsha ...";    
    }    
};  int main(void) {  
   last_name d = last_name();    
   d.Name();  
   return 0;  
}  
