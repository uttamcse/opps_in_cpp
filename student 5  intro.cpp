/*#include<iostream>
#include<string>
using namespace std;

int main()
{
 
  struct student{
  	
  	string name ;
  	int roll;
  	int marks;
  	int age;
  	
  };

struct student s[3];
{
	
	for(int i=0;i<=2;i++)
	{
	cout<<"student "<<i+1<<endl;
	
	cout<<"enter your name :";
	cin>>s[i].name;
	
	cout<<"enter your roll :";
	cin>>s[i].roll;
	
	
	cout<<"enter your marks :";
	cin>>s[i].marks;
	
	
	cout<<"enter your age :";
	cin>>s[i].age;
}
	for (int i=0;i<=2;i++)
	{
		
		cout<<"---------------------------------------------------------------------"<<endl;
		cout << "Roll no. : " << s[i].roll<< endl;
      	cout << "Name : " << s[i].name << endl;
      	cout << "Age : " << s[i].age << endl;
      	cout << "Marks : " << s[i].marks << endl;
     
	}
	
}
  return 0;
}



*/


#include<iostream>
#include<string>
using namespace std;


int main()
{
	struct student {
		
		string name;
		int age;
		int roll;
		int marks;
		
	};
	
	struct student s[4];
	
	for(int i=0;i<3;i++ )
	{
	
	cout<<"student "<<i+1<<endl;
	
	cout<<"enter your name :";
	cin>>s[i].name;
		
	cout<<"enter your age :";
	cin>>s[i].age;
		
	cout<<"enter your roll :";
	cin>>s[i].roll;
		
	cout<<"enter your marks :";
	cin>>s[i].marks;
	
}

for(int i=0;i<3;i++)
{
	
 cout<<"-----------------------------------------------------------------------------"<<endl;		
     
      cout << "Name : " << s[i].name << endl;
      cout << "Age : " << s[i].age << endl;
       cout << "Roll no. : " << s[i].roll << endl;
       cout << "Marks : " << s[i].marks << endl;
	
}
	
	return 0;
}
