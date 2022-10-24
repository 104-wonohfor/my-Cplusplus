#include <iostream>
using namespace std;
int main()
{
    for (int i = 0; i <= 5; i++)
    {
        if (i==3)
        {
            break;
        }
        cout<<i<<" ";
    }
    
}

#include <iostream>
using namespace std;
int main()
{
    for (int i = 0; i <= 5; i++)
    {
        if (i == 3)
        {
            continue;
        }
        cout<<i<<" ";
    }
    
}

#include <iostream>
using namespace std;
int main()
{
    float num,sum,avg;
    int i,n;
    cout<<"Maximum number of input: ";
    cin>> n;

    for (i = 1; i <=n; i++)
    {
        cout<<"Input number n"<<i<<": ";
        cin >>num;
        if (num<0)
        {
            goto jump;
        }
        sum +=num;
    }
    jump: 
    avg = sum/(i-1);
    cout<<"Average = "<<sum<<" / "<<"("<<i-1<<")"<<" = "<<avg<<endl;
    
}