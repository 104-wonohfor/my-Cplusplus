#include <iostream>
using namespace std;

float tinh(float a, float b,float tong,float hieu)
{
    tong = a+b;
    hieu = a-b;
    cout<<a<< " + "<<b<<" = "<<tong<<endl;
    cout<<a<< " - "<<b<<" = "<<hieu<<endl;
}
int main()
{    
    float a =4.5, b=6.0,tong,hieu;
    tinh(a,b,tong,hieu);
    float tong_1 = tong;
    cout<<tong_1<<endl;
    cout<<a<<endl;
    float c =6.5,d=6.0;
    tinh(c,d,tong,hieu);
    float tong_moi =tong;
    cout<<tong_moi<<endl;
}
