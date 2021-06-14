#include<iostream>
#include<string>
using namespace std;

class area
{

public :
	int l,b;
	void setarea(int L ,int B)
	{
		l=L;
		b=B;
	}
	int getarea()
	{
	cout<<"Area :"<<l*b<<endl;
	}
	
	void setperimeter(int L ,int B)
	{
		l=L;
		b=B;
	}
	int getperimeter()
	{
	cout<<"Perimeter :"<<2*(l+b)<<endl;
	}
	
};

int main()
{
	
	area a;
	a.setarea(4,5);
	a.getarea();

	
	a.setperimeter(5,7);
	a.getperimeter();
	return 0;
}
