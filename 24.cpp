//this pointer
#include<iostream>
#include<conio.h>
using namespace std;
class Demo 
{ 
   private: 
      int num; 
      char ch; 
   public: 
      void setValues(int num, char ch)
      {  
         this -> num = num; 
         this->ch=ch; 
      }  
     void displayValues( )
     { 
         cout<<num<<endl;  
        cout<<ch; 
      } 
}; 
int main( ) 
{ 
    Demo obj; 
    obj.setValues(100,'A');   
    obj.displayValues(); 
    return 0; 
}

