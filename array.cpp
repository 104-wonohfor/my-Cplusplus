#include <iostream>
using namespace std;
int main(){
    #define n1 10
    #define n2 20

    int Mang1Chieu [10];
    int a[4] = {0,1,2,3};
    int b[] = {3,4,5,6,7,8,9};
    int c[3] = {0};
    int d[n1];
    int e[n1][n2];

    cout<<a[3]<<endl;
    cout<<b[2]<<endl;
    cout<<c[2]<<endl;

    cout<<Mang1Chieu[0]<<endl;
    cout<<a[12]<<endl;
    cout<<a[-1]<<endl;
    cout<<c[-1]<<endl;
}

#include<iostream>
using namespace std;
int main(){
    #define MAX 5
    int array [MAX] ;
    cout<<"Input array"<<endl;
    for (int i = 0; i < MAX; i++){
        cout<<i<<"th element: ";
        cin>>array[i];
    }
    cout<<"Output array: ";
    for (int i =0; i<MAX;i++){
        cout<<array[i]<<" ";
    }
}

#include <iostream>
using namespace std;
int main(){
    #define MAX 5
    int array[MAX];
    cout<<"Input array: "<<endl;
    for (int i = 0; i < MAX; i++){
        cout<<i<<"th element: ";
        cin>>array[i];
    }
    cout<<"Output array (original):  ";
    for (int i = 0; i < MAX; i++){
        cout<<array[i]<<" ";
    }
    array[3] = 99;
    cout<<"\nOutput array after changing: ";
    for (int i = 0; i < MAX; i++){
        cout<<array[i]<<" ";
    }         
}

#include <iostream>
using namespace std;
int main(){
    #define MAX 5
    int arrayA[MAX] = {6,5,4,3,1};
    int arrayB[MAX];
    cout<<"arrayB original: ";
    for (int i = 0; i < MAX; i++){
        cout<<arrayB[i]<<" ";
    }
    for (int i = 0; i < MAX; i++){
        arrayB[i] = arrayA[i];
    }
    cout<<"\narrayB after changing: ";
    for (int i = 0; i < MAX; i++){
        cout<<arrayB[i]<<" ";
    }

    //Address of array
    int DEC;
    cout<<"\nAddress of each element in arrayA (in DEC): ";
    for (int i = 0; i < MAX; i++)
    {
        DEC = (int) &arrayA[i];
        cout<<DEC<<"  ";
    }
    cout<<"\nAddress of each element in arrayB (in DEC): ";
    for (int i = 0; i < MAX; i++)
    {
        DEC = (int) &arrayB[i];
        cout<<DEC<<"  ";
    }       
}

#include <iostream>
using namespace std; 

void ChangeArray(int a[]){
    a[2] = 99;
}
int main(){
    int DEC;
    #define MAX 5

    int arrayA[MAX] = {5,4,3,2,1};
    cout<<"arrayA before changing: ";
    for (int i = 0; i < MAX; i++){
        cout<<arrayA[i]<<" ";
    }
    cout<<"\nAddress of each element in arrayA (in DEC): ";
    for (int i = 0; i < MAX; i++){
        DEC = (int) &arrayA[i];
        cout<<DEC<<"  ";
    }       
    ChangeArray(arrayA);
    cout<<"\narrayA after changing: ";
    for (int i = 0; i < MAX; i++){
        cout<<arrayA[i]<<" ";
    } 
    cout<<"\nAddress of each element in arrayA (in DEC): ";
    for (int i = 0; i < MAX; i++){
        DEC = (int) &arrayA[i];
        cout<<DEC<<"  ";
    }       
}

// => Khi thay đổi giá trị phần tử trong mảng, 
// địa chỉ của phần tử bị thay đổi vẫn được giữ nguyên.



// Tìm xem phần tử x có nằm trong mảng a kích thước n hay không?
// Nếu có thì nó nằm ở vị trí nào?
#include <iostream>
using namespace std;

int main(){
    #define MAX 5
    char arrayA[] = "Thanga";
    char letter;
    int  boolean=0;
    
    cout<<"Enter a letter to found: ";
    cin>>letter;

    for (int i = 0; i < sizeof(arrayA); i++){
        if (arrayA[i] == letter){
            cout<<"Letter '"<<letter<<"' is in position: "<<"arrayA["<<i<<"]"<<endl;
            boolean=1;
        }
    }
   
    if (boolean == 0){
        cout<<"Letter '"<<letter<<"' not in arrayA"<<endl;
    }
}


// Cho trước mảng a, số lượng phần tử na. 
// Tách các số nguyên tố có trong mảng a vào mảng b.
#include <iostream>
using namespace std;
int checkPrime(int n){
    if (n <= 1)
        return 0;
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return 0;
    return 1;
}

int main(){
    #define MAX 8
    int arrayA[MAX] = {1,2,5,14,20,7,9,19};
    int arrayB[MAX]= {};
    cout<<"arrayA: ";
    for (int i = 0; i < MAX; i++){
        cout<<arrayA[i]<<" ";
    }
    int k =0;

    for (int i = 0; i < MAX; i++){
        if (checkPrime(arrayA[i]) == 1){
            arrayB[k] = arrayA[i];
            k++;
        }
    }
    cout<<"\narrayB: ";
    for (int i = 0; i < k; i++){
        cout<<arrayB[i]<<" ";
    }
}

