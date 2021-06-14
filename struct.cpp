#include<iostream>
#include<string>
using namespace std;

struct student{
	
	string name;
	int roll;
	int age;
	int marks;
};


int main()
{
struct student s1;
s1.name="uttam";
s1.roll=19162;
s1.age=20;
s1.marks=78;


cout<<"s1 name is : "<<s1.name<<endl;
cout<<"s1 age is : "<<s1.age<<endl;
cout<<"s1 roll no is : "<<s1.roll<<endl;
cout<<"s1 marks is : "<<s1.marks<<endl;

return  0;
}



#include<iostream>
using namespace std;
#include<string>

/*

struct emply
{
int id;
int age;
int salery;
string name;
	
};
int main()
{
	struct emply uttam;
	uttam.id=19162;
	uttam.age=20;
	uttam.salery=2000000;
	uttam.name="uttam";

	cout<<"emply name is "<<uttam.name<<endl;
	cout<<"emply id is "<<uttam.id<<endl;
	cout<<"emply age is "<<uttam.age<<endl;
	cout<<"emply salery is "<<uttam.salery<<endl;
	
	return 0;
}
*/

