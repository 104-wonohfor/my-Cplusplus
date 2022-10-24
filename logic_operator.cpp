#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a,abs;
    cout<<"input a number: ";
    cin >> a;
    abs = (a>0) ? a: -a;
    cout<<"abs(a) = "<<abs<<endl;

    (abs%2 ==0) ? cout<<abs<<" is an even number."<<endl : 
    cout<<abs<<" is an odd number."<<endl;
}

#include <iostream>
using namespace std;
int main()
{
    int x,y;
    cout<<"Input number x: ";
    cin >> x;
    y = (x>10) ? 30:50;
    cout<<"=> y = "<<y<<endl;
}

#include <iostream>
using namespace std;
int main()
{
    int a,b,c,d;
    cout<<"Input number a: ";
    cin>>a;
    cout<<"Input number b: ";
    cin >>b;
    
    cout <<"Number "<<(a>b? "a":"b")<<"("<<(a>b ? a:b)<<")"<<" is greater"<<endl;
}

#include <iostream>
using namespace std;
int main()
{
    int a,b,c,d;
    a = 4, b=2; c= 8; d=3;

    cout<<(d>(c>(a>b?a:b)?c:(a>b?a:b))?d:(c>(a>b?a:b)?c:(a>b?a:b)))<<" is the greatest"<<endl;
}