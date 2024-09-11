#include<iostream>
using namespace std;
class savingaccount
{
  char name[10],address[20];
  int ac_no;
  double balance,amount;
  public:
    void createaccount()
  {
    cout<<"Create a new saving account: "<<endl;
    cout<<"Name: ";
    cin>>name;
    cout<<"Address: ";
    cin>>address;
    cout<<"Account number: ";
    cin>>ac_no;
    cout<<"First deposit: ";
    cin>>balance;
  }  
  void deposit()
  {
     cout<<"\nHow much money do you want to deposit: "<<endl;
     cin>>amount;
     balance+=amount;
     cout<<"New balance: "<<balance<<endl;
  }
    void withdraw()
    {
    cout<<"\nHow much money do you want to withdraw: "<<endl;
     cin>>amount;
     balance-=amount;
     cout<<"New balance: "<<balance<<endl;
    }
  void display()
  {
    cout<<"\nAccount no: "<<ac_no<<endl;
    cout<<"Balance: "<<balance;
  }
};
int main()
{
    savingaccount *ps;
    savingaccount s;
    ps=&s;
    ps->createaccount();
    ps->deposit();
    ps->withdraw();
    ps->display();
}