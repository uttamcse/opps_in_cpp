#include<iostream>
#include<string>
using namespace std;

class absforchange
{
	virtual void askforpromotion()=0;	
};

class Employee :absforchange
{

public :
	int salary;
	int work;
	
	 setinfo(int Salary)
	{
	cout<<"Salary : "<<salary<<endl;	
	}

	 setaddsalary(int Salary)
	{
		if(salary<500)
		
	cout<<"Salary : "<<salary+10<<endl;	
	}

	 setaddwork(int Salary)
	{
	cout<<"Salary : "<<work<<endl;	
	}

	Employee(int Salary, int Work)
	{
		salary=Salary;
		work=Work;
	}
	askforpromotion()
	{
		if(salary<500)
		{
			cout<<"Salary :"<<salary+10<<endl;
		}
		else if (work>=6)
		{
			{
			cout<<"Salary :"<<salary+5<<endl;
		}	
		}
	}
	
};

int main()
{
	Employee e1=Employee(456,43);
	e1.askforpromotion(444);
	e1.getinfo();

	
	
	return 0;
}
