#include <iostream>
#include <sstream>
using namespace std;
class Student
{
    int age, standard;
    string first_name, last_name;
    public: 
    void set_age()
    {
        cin>>age;
    }
    void set_first_name()
    {
        cin>>first_name;
    }
    void set_last_name()
    {
        cin>>last_name;
    }
     void set_standard()
    {
        cin>>standard;
    }
    int get_age()
    {
        return(age);
    }
    string get_last_name()
    {
        return last_name;
    }
    string get_first_name()
    {
        return first_name;
    }
    int get_standard()
    {
        return standard;
    }
};

int main() {
    Student st;
    st.set_age();
    st.set_first_name();
    st.set_last_name();
    st.set_standard();
    
    cout <<"\n"<< st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout<<st.get_age() <<","<< st.get_first_name()<<","<<st.get_last_name()<<","<<st.get_standard();
    return 0;
}
