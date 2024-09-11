#include<iostream>
using namespace std;
#include<fstream>
int main()
{
    ofstream fout("test.txt");  //write mode
    char name[10], name1[10];
    cout<<"Enter name: ";
    cin>>name;
    fout<<name;
    fout.close();
    ifstream fin("test.txt");   //read mode
    fin>>name1;
    cout<<name1;
    fin.close();
}