#include<iostream>
#include<string>
using namespace std;

int main()
{
  struct student
  {
    int roll_no;
    string name;
    int age;
  };

  struct student stud[3];

  for(int i=0; i<=2; i++)
  {
    cout << "Student " << i+1 << endl;
    
    cout << "Enter name :";
    cin >> stud[i].name;
    
    cout << "Enter age :";
    cin >> stud[i].age;
    
    cout << "Enter roll :";
    cin >> stud[i].roll_no;
   
  }

  for(int i=0; i<=2; i++)
  {
    
 cout<<"-----------------------------------------------------------------------------"<<endl;		
      cout << "Roll no. : " << stud[i].roll_no << endl;
      cout << "Name : " << stud[i].name << endl;
      cout << "Age : " << stud[i].age << endl;
     
    
  }

  return 0;
}
