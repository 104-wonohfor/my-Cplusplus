#include <iostream>
using namespace std;
int main()
{
    int x=1;
    do{
        cout<<x<<" ";
        ++x;
    } 
   while (x<=5);
}

#include <iostream>
using namespace std;
int main()
{
    int a=1,b;
    do
    {
        b=1;
        do
        {
            cout<<a<<" + "<<b<<" = "<<a+b<<endl;
            b = b+2;
        } while (b<20);
        a++;
    } while (a<20);
}

