#include<iostream>
using namespace std;
int main ()
{
    int a,b,c;
    a=5;
    b=5;
    c=10;
    cout <<a<<" = "<<b<<" is "<<(a==b)<<endl;
    cout <<a<<" = "<<c<<" is "<<(a==c)<<endl;
    cout <<a<<" khong bang "<<c<<" is "<<(a!=c)<<endl;
    cout <<a<<" > "<<b<<" is "<<(a>b)<<endl;
    cout <<a<<" < "<<c<<" is "<<(a<c)<<endl;
    cout <<a<<" >= "<<b<<" is "<<(a>=b)<<endl;
    cout <<a<<" <= "<<b<<" is "<<(a<=b)<<endl;
    cout <<a<<" <= "<<c<<" is "<<(a<=c)<<endl;
}