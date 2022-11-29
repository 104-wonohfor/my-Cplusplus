#include <iostream>
using namespace std;

struct POINT
{
    int x;
    int y;
};

POINT Input()
{
    POINT temp;
    cout<<"Input point:"<<endl;
    cout<<"x: "; cin>>temp.x;
    cout<<"y: "; cin>>temp.y;
    return temp;
}

void Output(POINT p1)
{
    cout<<"Output point: ("<<p1.x<<","<<p1.y<<")"<<endl;
}

int main()
{
    POINT p1 = {1,2};
    p1 = Input();
    Output(p1);
}