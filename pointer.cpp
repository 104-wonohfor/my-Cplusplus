#include <iostream>
using namespace std;

int main()
{
    int a=5;
    int *pa = &a;

    cout<<"gia tri cua bien a:"<<endl;
    cout<<a<<endl;
    cout<<*pa<<endl;
    cout<<"dia chi cua bien a:"<<endl;
    cout<<&a<<endl;
    cout<<pa<<endl;
    cout<<"dia chi cua con tro pa:"<<endl;
    cout<<&pa<<endl;


    char *p1;
	int *p2;
	float *p3;
	double *p4;
	cout<<"Size of char type pointer:"<<sizeof(char *)<<" bytes" <<endl;
	cout<<"Size of int type pointer:"<<sizeof(int *)<<" bytes" <<endl;
	cout<<"Size of float type pointer:"<<sizeof(float *)<<" bytes" <<endl;
	cout<<"Size of double type pointer:"<<sizeof(double *)<<" bytes" <<endl;
}