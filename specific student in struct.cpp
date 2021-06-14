#include<iostream>
#include<string>
using namespace std;


struct student{
	
	
	string name;
	int age;
	int roll;
};
int main()
{
	struct student s[11];
	
	for(int i=0;i<=10;i++)
	{
		cout<<"student "<<i+1<<endl;
		
		cout<<"enter name :";
		cin>>s[i].name;
			
		cout<<"enter age :";
		cin>>s[i].age;
	
		cout<<"enter roll :";
		cin>>s[i].roll;
		 
	}
	for(int i=0;i<=10;i++)
	{
		
		void nameage();
		{
			if(s[i].age==14)
		{
			cout<<"NAME :"<<s[i].name<<endl;
		}
		}
		void evenname();
		{
			 if(s[i].roll%2==0)
		{
			cout<<"NAME :"<<s[i].name<<endl;
		}
		}
	
	}
	
	return 0;
}
