#include<iostream>
using namespace std;
class student
{
    public:
    virtual void getdata()=0;
    virtual void show()=0;
};
class engineering: public student
{
    char name[2][20], faculty[2][20];
    public:
    void getdata()
    {
        for(int i=0;i<2;i++){
        cout<<"Enter name: ";
        cin>>name[i];
        cout<<"Enter faculty: ";
        cin>>faculty[i];
        }
    }
    void show(){
        for(int i=0;i<2;i++){
        cout<<"\nName: "<<name[i];
        cout<<"\nFaculty: "<<faculty[i];
        }
    }
};
class science:public student
{
    
    char name1[2][20], faculty1[2][20];
    public:
    void getdata()
    {
        for(int i=0;i<2;i++){
        cout<<"Enter name: ";
        cin>>name1[i];
        cout<<"Enter faculty: ";
        cin>>faculty1[i];
        }
    }
    void show(){
        cout<<"\nName: "<<name1;
        cout<<"\nFaculty: "<<faculty1;
    }
};
class medical:public student
{
    
    char name2[2][20], faculty2[2][20];
    public:
    void getdata()
    {
        cout<<"Enter name: ";
        cin>>name2;
        cout<<"Enter faculty: ";
        cin>>faculty2;
    }
    void show(){
        cout<<"\nName: "<<name2;
        cout<<"\nFaculty: "<<faculty2;
    }
};
int main()
{
    student *ps[3];
    engineering e;
    science s;
    medical m;
    s[0]=&e;
    s[0]->getdata();
    s[0]->show();
    s[1]=&s;
    s[1]->getdata();
    s[1]->show();
    s[2]=&m;
    s[2]->getdata();
    s[2]->show();

}