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