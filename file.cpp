#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    fstream file;
    string line;
    cout<<"================Read file================="<<endl;
    file.open("F:\\data.txt", ios::app| ios::out | ios::in);
    while (!file.eof())
    {
        getline(file,line);
        cout<<line<<endl;
    }
    file.close();


    cout<<"================Write file================="<<endl;
    file.open("F:\\data.txt", ios::app| ios::out | ios::in);
    getline(cin,line);
    file<<'\n'<<line;
    file.close();

    cout<<"================Read file after write file================="<<endl;
    file.open("F:\\data.txt", ios::app | ios::in | ios::out);
    while (!file.eof())
    {
        getline(file,line);
        cout<<line<<endl;
    }
    file.close();
    
}
