
#include<iostream>
#include<string>
using namespace std;


class religon
{
	
	public :
	int year;
	string name;
	void work()
	{
		cout<<"Name :"<<name<<endl;
		cout<<"Year :"<<year<<endl;
		cout<<"------------------------------------------------------------------------------"<<endl;
	}	
	religon(int Year , string Name)
	{
		year=Year;
		name=Name;
	}
	
		
};
int main()
{
religon hindu=religon(10,"Lord Shiva , Bhrahma , Vishnu");
hindu.work();

religon islam=religon(6,"Allah");
islam.work();

religon christan=religon(5,"ishu");
christan.work();

religon shikh=religon(4,"wahe guru");
shikh.work();



	return 0;
}

