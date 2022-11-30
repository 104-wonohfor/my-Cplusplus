#include <iostream>
using namespace std;

void PassByValue (int *x)
{
    cout<<"Dia chi cua con tro x: "<<&x<<endl;
    (*x)++;
}

int main()
{
    int a=10;
    cout<<"Dia chi cua bien a: "<<&a<<endl;
    PassByValue(a);
    cout<<"Dia chi cua bien a (after): "<<&a<<endl;
    cout<<"Gia tri cua a: "<<a<<endl;
}