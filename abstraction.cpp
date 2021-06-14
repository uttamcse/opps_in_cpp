
#include<iostream>
#include<string>
using namespace std;

class abshouse
{
	virtual void price()=0;
};
class house :abshouse
{
	
	public :
	int yearold;
	string name;
	void info()
	{
		cout<<"Name :"<<name<<endl;
		cout<<"Year :"<<yearold<<endl;
		cout<<"------------------------------------------------------------------------------"<<endl;
	}	
	house(int Yearold , string Name)
	{
		yearold=Yearold;
		name=Name;
	}
	void price()
	{
		if(yearold>=10)
		{
			cout<<"cheap but just have 1 room in "<<name<<endl;
		}
		else if(yearold>5)
		{
			cout<<"not cheap but just have 2 room in "<<name<<endl;
		}
		else
		{
			cout<<"so costly you can not buy "<<name<<endl;	
		}
	}
	
		
};
int main()
{

house antila =house(1,"Antila");
antila.info();

cout<<"------------------------------------------------------------------------------"<<endl;
house mannat=house(12,"Mannat");
mannat.info();
cout<<"------------------------------------------------------------------------------"<<endl;

mannat.price();
antila.price();

	return 0;
}

