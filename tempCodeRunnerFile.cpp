#include <iostream>
using namespace std;
int main()
{
    int a,b,c,d;
    a = 4, b=2; c= 8; d=3;

    cout<<(d>(c>(a>b?a:b)?c:(a>b?a:b))?d:(c>(a>b?a:b)?c:(a>b?a:b)))<<"is the greatest"<<endl;
}