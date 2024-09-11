#include<iostream>
using namespace std;
class student
{
  char name[10],address[20],sem[5],faculty[25];
  int crn;
  public:
  void getdata()
  {
    cout<<"Enter the details of student: "<<endl;
    cout<<"Name: ";
    cin>>name;
    cout<<"Address: ";
    cin>>address;
    cout<<"Semester: ";
    cin>>sem;
    cout<<"Faculty: ";
    cin>>faculty;
    cout<<"College roll no: ";
    cin>>crn;
  }  
  void display()
  {
    cout<<"The details of the students are as follows: "<<endl;
    cout<<"Name: "<<name;
    cout<<"\nAddress: "<<address;
    cout<<"\nSemester: "<<sem;
    cout<<"\nFaculty: "<<faculty;
    cout<<"\nCollege roll no: "<<crn;
  }
};
int main()
{
    student *ps;
    student s;
    ps=&s;
    ps->getdata();
    ps->display();
}