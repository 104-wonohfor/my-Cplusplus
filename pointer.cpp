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


#include <iostream>
using namespace std;

int main()
{
    int arr[5], *parr;
    parr = arr;

    cout<<"Input array:"<<endl;
    for (int i = 0; i < 5; i++)
    {
        cout<<i+1<<"th element: ";
        cin>>parr[i];
    }

    cout<<"Output array: ";
    for (int i = 0; i < 5; i++)
    {
        cout<<*(parr + i)<<" ";
    }
}

#include <iostream>
using namespace std;

void Output(int arr[5],int n)
{   
    cout<<"Output array: ";
    for (int i = 0; i < n; i++)
    {
        cout<<*(arr +i)<<" ";
    }
    
}

int main()
{
    int arr[5] = {4,2,5,7,3};
    Output(arr,5);
}



#include <iostream>
using namespace std;

int main()
{
    int arr[2][3] = {{-1,2,5},{2,4,5}};
    int *parr;
    parr = (int *) arr;

    cout<<"Output array: "<<endl;
    for (int i = 0; i < 6; i++)
    {
        cout<<*(parr+i)<<" ";
        if (i==2)
        {
            cout<<endl;
        }
    }
}
