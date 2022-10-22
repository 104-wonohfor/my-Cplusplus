#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
    int x,y,a,b,c,d;
    float z,t;
    x =-8; y = 8; z = 2.6;t=-4.3;a =5;b=3;

    cout<<"Gia tri tuyet doi cua x la: "<<abs(x)<<endl;
    cout<<"Gia tri tuyet doi cua so thuc(float) t la: "<<fabs(t)<<endl; 
    //fabs() có thể dùng cho cả số nguyên và số thực

    cout<<"z^y (2.6^8) = "<<pow(z,y)<<endl;
    cout<<"Can bac hai cua y la: "<<sqrt(y)<<endl;
    cout<<"Can bac ba cua y la: "<<cbrt(y)<<endl;

    cout<<"Gia tri cua e^y la: "<<exp(y)<<endl;
    cout<<"Gia tri cua e^y - 1 la: "<<expm1(y)<<endl;
    cout<<"Logarit co so e(ln(y)) cua y la: "<<log(y)<<endl;
    
    cout<<"Round number z:  "<<round(z)<<endl;
    cout<<"Round number t: "<<round(t)<<endl;
    cout<<"Lam tron len cua so z la: "<<ceil(z)<<endl;
    cout<<"Lam tron xuong cua so z la: "<<floor(z)<<endl;

    cout<<"So lon nhat trong khoang [t,z] la: "<<max(z,t)<<endl;
    cout<<"So lon nhat trong khoang [t,z] la: "<<fmax(t,z)<<endl;
    cout<<"So nho nhat trong khoang [t,z] la: "<<fmin(z,t)<<endl; 
    cout<<"So nho nhat trong khoang [t,z] la: "<<min(t,z)<<endl;
    // Có thể đảo thứ tự và trùng biến 
    
}

// source: https://cplusplus.com/reference/cmath/