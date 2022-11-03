#include <iostream>
using namespace std;

int main()
{
    int a,b,c,s1,s2,s3,S;
    cout<<"Nhap so a: ";
    cin>>a;
    cout<<"Nhap so b: ";
    cin>>b;
    cout<<"Nhap so c: ";
    cin>>c;
    
    s1 = 1,s2=1,s3=1;
    for (int i = 1; i<=a; i++)
    {   
        s1 = s1*i;
    }
    cout<<"s1 = "<<s1<<endl;

    for (int i = 1; i<=b; i++)
    {   
        s2 = s2*i;
    }
    cout<<"s2 = "<<s2<<endl;

    for (int i = 1; i<=c; i++)
    {   
        s3 = s3*i;
    }
    cout<<"s3 = "<<s3<<endl;
    S = s1+s2+s3;
    cout<<"S = "<<a<<"! + "<<b<<"! + "<<c<<"! = "<<S<<endl;
}


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

