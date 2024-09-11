#include <iostream>
using namespace std;
#include <fstream>
int main()
{
    char ch;
    int r;
    ofstream fout;
    fout.open("hi.txt",ios::out); //write to file
    cin.get(ch);
    while (ch!='\n')
    {
        fout.put(ch);
        cin.get(ch);
    }
    fout.close();
    ifstream fin;
    fin.open("hi.txt",ios::in);
    while(fin)
    {
        fin.get(ch);
        if(ch!=' ')
        {
            cout.put(ch);
        }
    }
    fin.close();
    return 0;
}