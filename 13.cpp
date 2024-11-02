//destructors:
#include<iostream>
using namespace std;
int count = 0;
class alpha
{
	public:
		alpha()
		{
			count++;
			cout<<"No. of objects created"<<count<<endl;
		}
		~alpha()
		{
			cout<<"No. of Objects destroyed"<<count<<endl;
			count--;
		}
};
int main()
{
	alpha A1, A2, A3, A4;
	{
		cout<<"enter block 1"<<endl<<endl;
		alpha A5;
	}
	{
		cout<<"Enter block 2:"<<endl<<endl;
		alpha A6;
	}
	return 0;
}
