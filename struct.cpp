#include <iostream>
using namespace std;

int main(){
    struct DIEM
    {
        int x;
        int y;
    };
    struct SINHVIEN
    {
        int MSSV;
        string hoten;
        string ngaysinh;
        bool gioitinh;
        float Toan,Ly,Anh;
    };

    DIEM d1 = {4,5};
    SINHVIEN sv1 = {20218217,"104","16/12/2002",true,9.5};
    SINHVIEN sv2 = {20218216,"526","16/12/2003",false,9};

    cout<<d1.x<<endl;
    DIEM d2 = d1;
    cout<<d2.x<<" "<<d2.y<<endl;
    DIEM d3;
    d3.x = 10;
    d3.y = 9.5;
    cout<<d3.x<<" "<<d3.y<<endl;

    cout<<sv1.MSSV<<endl;
    if (sv1.gioitinh == 1){
        cout<<"nam"<<endl;
    }
    else if (sv1.gioitinh == 0){
        cout<<"nu"<<endl;
    }
    cout<<sv2.MSSV<<endl;
    if (sv2.gioitinh == 1){
        cout<<"nam"<<endl;
    }
    else if (sv2.gioitinh == 0){
        cout<<"nu"<<endl;
    }   
    cout << "Size of SINHVIEN is: " << sizeof(SINHVIEN) <<" byte"<< endl;
}


#include <iostream>
using namespace std;
struct POINT
{
    float x;
    float y;
};
struct TRIANGLE
{
    POINT p1;
    POINT p2;
    POINT p3;
};
int main(){
    POINT d1 = {3,5};
    POINT d2 = {4,9};
    POINT d3 = {2,4};

    TRIANGLE t1;
    t1.p1 = d1;
    t1.p2 = d2;
    t1.p3 = d3;
    
    cout<<"Coordinates of 3 points in triangle t1: ";
    cout<<"("<<t1.p1.x<<";"<<t1.p1.y<<")"; cout<<",";
    cout<<"("<<t1.p2.x<<";"<<t1.p2.y<<")"; cout<<",";
    cout<<"("<<t1.p3.x<<";"<<t1.p3.y<<")"; 
}

#include <iostream>
using namespace std;
struct POINT1
{
    int x;
    int y;
};
struct TRIANGLE1
{
    POINT1 array[3];
};

int main()
{
    TRIANGLE1 t1;
    cout<<"Input coordinates: "<<endl;
    for (int i = 0; i < 3; i++)
    {
        cout<<"Point "<<i+1<<": "<<endl;
        cout<<"p"<<i+1<<".x = ";
        cin>>t1.array[i].x;
        cout<<"p"<<i+1<<".y = ";
        cin>>t1.array[i].y;
    }

    cout<<"Coordinates of 3 points in triangle t1: ";
    cout<<"("<<t1.array[0].x<<";"<<t1.array[0].y<<")"; cout<<",";
    cout<<"("<<t1.array[1].x<<";"<<t1.array[1].y<<")"; cout<<",";
    cout<<"("<<t1.array[2].x<<";"<<t1.array[2].y<<")"; cout<<endl;

    cout<<"size of POINT1 is: "<<sizeof(POINT1)<<endl;
    cout<<"size of TRIANGLE1 is: "<<sizeof(TRIANGLE1)<<endl;
}


