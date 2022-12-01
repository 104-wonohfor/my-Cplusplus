#include <iostream>
using namespace std;

struct POINT
{   
    float x; 
    float y;
};


int main()
{
    POINT *ptr;
    ptr = new POINT;

    cout<<"Input:"<<endl;
    cout<<"x: ";cin>>ptr->x;
    cout<<"y: ";cin>>ptr->y;

    cout<<"==============================="<<endl;
    cout<<"Output: ("<<ptr->x<<";"<<ptr->y<<")"<<endl;

    delete ptr;
    ptr =NULL;
}