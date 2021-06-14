#include<iostream>
#include<string>
using namespace std;

class student 
{
	
	public:
		int roll;
		string name;
		int marks;
		
		void aboutstudent()
		{
			
			cout<<"Name :"<<name<<endl<<"Roll :"<<roll<<endl<<"Marks : "<<marks<<endl;
		}
		
};
int main()
{
student uttam;
uttam.roll=19162;
uttam.marks=78;
uttam.name="Uttam";
uttam.aboutstudent();

cout<<"------------------------------------------------------------------------------";

student utsav;
utsav.roll=19161;
utsav.marks=75;
utsav.name="Utsav";
utsav.aboutstudent();


cout<<"------------------------------------------------------------------------------";

student viraj;
viraj.roll=19164;
viraj.marks=74;
viraj.name="Viraj";
viraj.aboutstudent();


cout<<"------------------------------------------------------------------------------";

student umang;
umang.roll=19160;
umang.marks=73;
umang.name="Umang";
umang.aboutstudent();


cout<<"------------------------------------------------------------------------------";

student yash;
yash.roll=19166;
yash.marks=71;
yash.name="Yash";
yash.aboutstudent();
	return 0;
}
