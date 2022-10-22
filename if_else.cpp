#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"Enter a number: ";
    cin>>x;

    if (x>0){
        cout<<"You have enter a positive number."<<endl;
    }
    /*else {
    cout<<"You have enter a negative number."<<endl;
    }*/

    cout<<"Your number is: "<<x<<endl;
}


#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"Enter a number: ";
    cin>>x;

    if (x>0){
        cout<<"You have enter a positive number."<<endl;
    }
    else {
    cout<<"You have enter a negative number."<<endl;
    }

    cout<<"Your number is: "<<x<<endl;
}

#include <iostream>
using namespace std;
int main()
{
    int x;
    cout<<"Enter a number: ";
    cin>>x;

    if (x>0)
    {   
        if (x%2 == 0){
            cout<<"You have input an even number."<<endl;
        }
        else{
            cout<<"You have input an odd number."<<endl;
        }
    }
    else {
        cout<<"You have input a negative number."<<endl;
    }
    
    cout<<"Your number is: "<<x<<endl;
}

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
            cout<<"You have entered an even number."<<endl;
            cout<<"Your have entered number: "<<x<<endl;
        }
        else
        {
            cout<<"You have entered an odd number."<<endl;
            cout<<"Your have entered number: "<<x<<endl;
        }
        
    } 
    else if (x<0)
    {
        cout<<"You have entered a negative number."<<endl;
        cout<<"Your have entered number: "<<x<<endl;
    }
    else {
        cout<<"You have entered number: 0"<<endl;
    } 
    // Thêm điều kiện cho else{} sẽ bị lỗi.
}


