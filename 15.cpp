//polymorphism..
#include<iostream>
#include<cstring>
using namespace std;
class media
{
	protected:
		char title[50];
		float price;
	public:
		media( char *s, float a)
		{
			strcpy(title, s);
			price = a;
		}
		virtual void display(){}
};
class book :public media
{
	int pages;
	public:
		book(char *s, float a, int p): media(s,a)
		{
			pages = p;
		}
		void display();
};
class tape : public media
{
	float time;
	public:
		tape(char *s, float a, float t):media(s,a)
		{
			time = t;
		}
		void display();
};
void book::display()
{
	cout<<"\n title:"<<title;
	cout<<"\n Pages:"<<pages;
	cout<<"\n Price:"<<price;
}
void tape::display()
{
	cout<<"\n title:"<<title;
	cout<<"\n Play time:"<<time<<"mins.";
	cout<<"\n Price:"<<price;
}
int main()
{
	char * title = new char[30];
	float price, time;
	int pages;

//book details
	cout<<"\n title:"; cin>>title;
	cout<<"\n Pages:"; cin>>pages;
	cout<<"\n Price:"; cin>> price;

book book1(title, price, pages);
//tape details
	cout<<"\n title:"; cin>>title;
	cout<<"\n Price:"; cin>>price;
	cout<<"\n Play Time(mins):"; cin>> time;
tape tape1(title, price, time);
	media *list[2];
	list[0] = &book1;
	list[1] = &tape1;
	cout<<"media details";
	cout<<"---book---";
	list[0]->display();
	cout<<"---tape---";
	list[1]->display();
	return 0;
}
	

