#include <iostream>
using namespace std;
int main()
{
    int a,b,c,d,e;
    a = 25;
    b = 3 ;

    c = a+b;
    cout <<"Tong cua a va b la: "<<c<<endl;
    c = a-b;
    cout <<"Hieu cua a va b la: "<<c<<endl;
    c = a*b;
    cout <<"Tich cua a va b la: "<<c<<endl;
    c = a/b;
    cout <<"Thuong cua a va b la: "<<c<<endl;
    c = a%b;
    cout <<"So du cua phep chia a/b la: "<<c<<endl;
    c = ++a;
    cout <<"So lien sau cua a la: "<<c<<endl;
    c = --b;
    cout <<"So lien truoc cua b la: "<<c<<endl;
    a = 25;
    b = 3;
    d = a++;
    cout <<"a = "<<a<<endl;
    cout <<"d = "<<d<<endl;
    e = b--;
    cout <<"b= "<<b<<endl;
    cout <<"e= "<<e<<endl;
    a =25;
}


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