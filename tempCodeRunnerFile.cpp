#include <iostream>
using namespace std;
int main()
{
    int x,y;
    cout<<"Input month: ";
    cin >> x;
    cout<<"Input year: ";
    cin >>y;

    switch (x)
    {
    case 1: 
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12: cout<<x<<"/"<<y<<" has 31 days"<<endl; break;

    case 4:
    case 6:
    case 9:
    case 11: cout<<x<<"/"<<y<<" has 30 days"<<endl; break;

    case 2:
        if ((y%4==0 && y%100!=0) || (y%400==0))
        {
            cout<<x<<"/"<<y<<" has 29 days"<<endl; 
        }
        else
        {
            cout<<x<<"/"<<y<<" has 28 days"<<endl;
        }
        break;        
    default:
        cout<<"Month not exists";
        break;
    }
}