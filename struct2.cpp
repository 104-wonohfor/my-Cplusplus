#include <iostream>
using namespace std;

struct POINT
{
    int x;
    int y;
};

int main()
{
    int n;
    POINT point_array[100];
    cout<<"Input n points:";
    cin>>n;
    cout<<"Input "<<n<<" points"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<"Input "<<i+1<<"th point:"<<endl;
        cout<<"x:";cin>>point_array[i].x;
        cout<<"y:";cin>>point_array[i].y;

    }
    cout<<"Output "<<n<<" points:"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<i+1<<"th points:"<<"("<<point_array[i].x<<","<<point_array[i].y<<")"<<endl;
    }
}


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

int main(){
    STUDENT student_array[100];
    int n;
    cout<<"Input ? students:";
    cin>>n;
    cout<<"Input "<<n<<" students"<<endl;

    for (int i = 0; i < n; i++)
    {
        cout<<"Input "<<i+1<<"th student:"<<endl;
        cin.ignore(100,'\n');
        cout<<"id: ";  getline(cin, student_array[i].id);
        cout<<"name: "; getline(cin, student_array[i].name);
        cout<<"birthday: "; getline(cin, student_array[i].birthday);
        cout<<"gender: "; cin>>student_array[i].gender;
        cout<<"math: "; cin>>student_array[i].math;
        cout<<"physics: "; cin>>student_array[i].physics;
        cout<<"english: "; cin>>student_array[i].english;
    }
    cout<<endl<<"===================================="<<endl;
    cout<<"Output "<<n<<" students:"<<endl;

    for (int i = 0; i < n; i++)
    {
        cout<<i+1<<"th student:"<<endl;
        cout<<"id:"<<student_array[i].id<<endl;
		cout<<"name:"<<student_array[i].name<<endl;
		cout<<"birthday:"<<student_array[i].birthday<<endl;
		cout<<"gender:"<<student_array[i].gender<<endl;
		cout<<"math:"<<student_array[i].math<<endl;
		cout<<"physics:"<<student_array[i].physics<<endl;
		cout<<"chemistry:"<<student_array[i].english<<endl<<endl;
    }
}


#include <iostream>
using namespace std;

struct POINT
{
    int x;
    int y;
};

void Input(POINT &p1)
{
    cout<<"Input point:"<<endl;
    cout<<"x:"; cin>>p1.x;
    cout<<"y:"; cin>>p1.y;
}

void Output(POINT p1)
{
    cout<<"Output point: ("<<p1.x<<","<<p1.y<<")"<<endl;
}

int main()
{
    POINT p1 = {1,2};
    Input(p1);
    Output(p1);
}



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