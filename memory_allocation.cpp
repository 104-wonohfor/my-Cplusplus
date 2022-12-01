#include <iostream>
using namespace std;

int main()
{
    int *IntPoint;
    float *FloatPoint;
    
    IntPoint = new int;
    FloatPoint = new float;

    *IntPoint = 19;
    *FloatPoint = 19.5f;

    cout<<"IntPoint: "<<*IntPoint<<endl;
    cout<<"FloatPoint: "<<*FloatPoint<<endl;

    delete IntPoint;
    delete FloatPoint;
    IntPoint = NULL;
    FloatPoint = NULL;
    cout<<"IntPoint: "<<*IntPoint<<endl;
    cout<<"FloatPoint: "<<*FloatPoint<<endl;
}


#include <iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter number of students: ";
    cin>>num;

    float *ptr;
    ptr = new float[num];

    cout<<"Enter GPA of students:"<<endl;
    for (int i = 0; i < num; i++)
    {   
        cout<<i+1<<"th student: ";
        cin>>*(ptr+i);
    }
    cout<<endl<<"========================================"<<endl;
    cout<<"Display GPA of students: "<<endl;
    for (int i = 0; i < num; i++)
    {
        cout<<"Student "<<i+1<<": "<<*(ptr+i)<<endl;
    }

    delete[] ptr;
    ptr = NULL;
}

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