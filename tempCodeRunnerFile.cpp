#include <iostream>
using namespace std;

int Fibonacci(int n){
    if (n == 0){
        return 0;
    }
    else if (n == 1){
        return 1;
    }
    return Fibonacci(n-1)+Fibonacci(n-2);
}

int main(){
    int n;
    int i =0;
    cout<<"Enter the number of term of series: ";
    cin>>n;
    if(n<2){do
    {
        cout<<"Input number must be greater than 2!"<<endl;
        cout<<"Enter the number of term of series: ";
        cin>>n;
    } while (n<=2);
    }

    cout<<"Fibonacci Series : ";
    for (int i = 0; i < n; i++)
    {
        cout<<Fibonacci(i)<<" ";
    }
}