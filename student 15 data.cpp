#include<iostream>
#include<string>
using namespace std;

struct student {
	
	string name;
	int age;
	int marks;
	int roll;
	
};

int main()
{
	struct student s[15];
	
	for(int i=0;i<=14;i++)
	{
		cout<<"student "<<i+1<<endl;
	
		cout<<"enter name :";
		cin>>s[i].name;
			
		cout<<"enter age :";
		cin>>s[i].age;
			
		cout<<"enter marks :";
		cin>>s[i].marks;
			
		cout<<"enter roll :";
		cin>>s[i].roll;
		
	}
	for(int i=0;i<=14;i++)
	{
		
	
	cout<<"------------------------------------------------------------------------"<<endl;
	cout<<"Name : "<<s[i].name<<endl;
	cout<<"Age : "<<s[i].age<<endl;
	cout<<"Marks : "<<s[i].marks<<endl;
	cout<<"Roll : "<<s[i].roll<<endl;
	
	
}
	
	return 0;
}
