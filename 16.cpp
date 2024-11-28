//overriding function
#include<iostream>
using namespace std;
class base
{
    int a;
    public:
    void set()
    {
        cin>>a;
    }
    void show()
    {
        cout<<a;
    }
};
class derived: base
{
    int b;
    public:
    void set()
    {
        cin>>b;
        base::set();
    }
    void show()
    {
        cout<<b;
        base::show();
    }
};
int main()
{
    derived d1;
    d1.set();
    d1.show();
}