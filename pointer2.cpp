#include <iostream>
#include <string>
using namespace std;

struct STUDENT
{
    string id;
    string name;
    string birthday;
    bool gender;
    float math,physics,english;
};

int main()
{
    STUDENT sv1;
    STUDENT *psv;
    psv = &sv1;

    cout<<"Input information of student:"<<endl;
    cout<<"id: "; getline(cin,sv1.id);
    cout<<"name: "; getline(cin,sv1.name);
    cout<<"birthday: "; getline(cin,sv1.birthday);
    cout<<"gender: "; cin>>sv1.gender;
    cout<<"math: ";cin>>sv1.math;
    cout<<"physics: ";cin>>sv1.physics;
    cout<<"english: ";cin>>sv1.english;

    cout<<"\n=============================================="<<endl;
    cout<<"Output: "<<endl;
    cout<<"id: "<<psv->id<<endl;
    cout<<"name: "<<(*psv).name<<endl;
    cout<<"birthday: "<<psv->birthday<<endl;
    cout<<"gender: ";
    if (psv->gender==0)
    {
        cout<<"female"<<endl;
    }
    else{
        cout<<"male"<<endl;
    }
    cout<<"math: "<<psv->math<<endl;
    cout<<"physics: "<<psv->physics<<endl;
    cout<<"english: "<<psv->english<<endl;
}


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
    PassByValue(&a);
    cout<<"Dia chi cua bien a (after): "<<&a<<endl;
    cout<<"Gia tri cua a: "<<a<<endl;
}