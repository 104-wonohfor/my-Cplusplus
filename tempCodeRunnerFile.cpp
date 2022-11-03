#include <iostream>
using namespace std;
int DisplayNumber(float a, float b)
{
    cout<<"The int number is "<<a<<endl;
    cout<<"The float number is "<<b<<endl;
}
float add(double a,double b)
{
    float sum = a+b;
    return sum;
}
int main()
{
    float a = 4;
    float b = 6.3;
    DisplayNumber(a,b);
    cout<<"a + b = ";
    cout<<add(a,b);
}
