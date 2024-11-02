//creating string object
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s1;
	string s2("New");
	string s3("Delhi");
	s1 = s2;
	cout<<"S1 = "<<s1<<endl;
	s1 = "Standard C++";
	cout<<"Now S1 = "<<s1<<endl;
	string s4(s1);
	cout<<"S4 = "<<s4<<endl;
	cout<<"enter a string";
	cin>>s4;
	//concatenating string
	s1=s2+s3;
	cout<<"S1 Finally contains: "<<s1<<endl;
	cout<<s4;
	return 0;
}
