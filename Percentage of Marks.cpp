#include<iostream>
using namespace std;

int main()
{
    /* Percentage of Marks
    */
   float subject1, subject2, subject3, subject4, subject5, subject6, marks, percentage;
   
   cout<<"\nEnter Marks of 6 Subjects: ";
   cin>>subject1>>subject2>>subject3>>subject4>>subject5>>subject6;

   marks = subject1 + subject2 + subject3 + subject4 + subject5 + subject6;
 
   percentage = marks / 6;
   cout << "\nPercentage of Marks: " << percentage << " % "<< endl;

   return (0);
}
