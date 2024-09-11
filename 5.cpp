#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    char ch;
    ifstream fin("hi.txt");
    ofstream fout("sample.txt");
    fin.seekg(0,ios::beg);
    fin.get(ch);
    while(fin)
    {
        fout.put(ch);
        fin.get(ch);
    }
    fin.close();
    fout.close();
    ifstream infile("sample.txt");
    infile.seekg(0,ios::beg);
    infile.get(ch);
    while (infile)
    {
        cout<<ch;
        infile.get(ch);
    }
    infile.close();
    return 0;
}