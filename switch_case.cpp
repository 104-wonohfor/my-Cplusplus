#include <iostream>
using namespace std;
int main()
{
    int x,y;
    cout<<"Input year: ";
    cin >> x;
    cout<<"Input month: ";
    cin >> y;

    switch (y)
    {
    case 1: cout<<"Month has 31 days.";break;
    case 3:cout<<"Month has 31 days.";break;
    case 4:cout<<"Month has 30 days.";break;
    case 5:cout<<"Month has 31 days.";break;
    case 6:cout<<"Month has 30 days.";break;
    case 7:cout<<"Month has 31 days.";break;
    case 8:cout<<"Month has 31 days.";break;
    case 9:cout<<"Month has 30 days.";break;
    case 10:cout<<"Month has 31 days.";break;
    case 11:cout<<"Month has 30 days.";break;
    case 12:cout<<"Month has 31 days.";break;
    case 2:
        if ((x%4==0 && x%100!=0) || (x%400==0))
        {
            cout<<"Month has 29 days.";
        }
        else
        {
            cout<<"Month has 28 days.";
        }
        break;
    default:
        "Month not exists.";
        break;
    }
}



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