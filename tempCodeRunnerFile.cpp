#include <iostream>
using namespace std;
int main()
{
    int x;
    cout<<"Enter a number: ";
    cin>>x;

    if (x>0)
    {
        if (x%2==0){
            cout<<"You have enter an even number."<<endl;
            cout<<"Your have enter number: "<<x<<endl;
        }
        else
        {
            cout<<"You have enter an odd number."<<endl;
            cout<<"Your have enter number: "<<x<<endl;
        }
        
    } 
    else if (x<0)
    {
        cout<<"You have enter a negative number."<<endl;
        cout<<"Your have enter number: "<<x<<endl;
    }
    else {
        cout<<"You have enter number: 0"<<endl;
    } 
}