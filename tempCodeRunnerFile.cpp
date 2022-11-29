#include <iostream>
using namespace std;

int main()
{
    int arr[2][3] = {{-1,2,5},{2,4,5}};
    int *parr;
    parr = (int *) arr;

    cout<<"Output array: "<<endl;
    for (int i = 0; i < 6; i++)
    {
        cout<<*(parr+i)<<" ";
        if (i==2)
        {
            cout<<endl;
        }
    }
    
}
