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


#include <iostream>
using namespace std;

int prime(int n)
{
    int i;
    for (int i = 2; i <= n; ++i)
    {
        if (n%i==0)
        {
            return 1;
        }
        return 0;
    }
    
}

int main()
{
    int n;
    int flag = 0;
    cout<<"Nhap so: ";
    cin>>n;

    flag = prime(n);
    if (flag == 0){
        cout<<n<<" is a prime number"<<endl;
    }
    else{
    cout<<n<<" is not a prime number"<<endl;
    }
}


#include <iostream>
using namespace std;

float tinh(float a, float b,float &tong,float &hieu)
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
    float c =6.5,d=6.0;
    tinh(c,d,tong,hieu);
    float tong_moi =tong;
    cout<<tong_moi<<endl;
}


#include <iostream>
using namespace std;

void printValue(int x , int y=5) 
{
	cout << "x: " << x << endl;
	cout << "y: " << y << endl;
}
int main(){
    printValue(4);
    printValue(4,6);
}