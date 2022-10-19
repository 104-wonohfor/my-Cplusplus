#include <iostream>
using namespace std;

int main()
{
    char ten[50];
    cout << "Your name is:";
    cin >> ten;
    cout <<"His name is "<< ten << endl;

    int a,b;
    cout <<"Value of a: ";
    cin >> a;
    cout <<"a = "<< a << endl;
    cout <<"Gia tri cua b la: ";
    cin >> b;
    cout << "b = " << b << endl;
    int Tong;
    Tong = a+b;
    cout <<"Tong cua a va b la: " << Tong << endl;
}


#include <iostream>
using namespace std;
int main ()
{
    char str[] = "Khong the doc du lieu...";
    cerr <<"Thong bao loi la: "<< str << endl;
    char str2[] = "Chuong trinh da thuc thi ...";
    clog <<"Thong bao: "<<str2<<endl;
}