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
    string hoten; float Toan,Ly,Anh;
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
    cout<<sizeof(hoten)<<endl;
    cout<<sizeof(Toan);
}