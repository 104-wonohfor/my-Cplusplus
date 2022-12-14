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

// Cho trước mảng a, số lượng phần tử na và mảng b số lượng phần tử nb. 
// Gộp 2 mảng trên theo tứ tự đó thành mảng c, số lượng phần tử nc.

#include <iostream>
using namespace std;

int main(){
    int na = 6,nb = 4;
    int arrayA[na] = {3,4,7,8,3,8};
    int arrayB[nb] = {2,4,5,1};
    int nc = na +nb;
    int arrayC[nc] = {};

    for (int i = 0; i < na; i++){
        arrayC[i] = arrayA[i];
    }
     
    for (int i = 0; i < nb; i++){
        arrayC[i+na] = arrayB[i];
    }
    
    cout<<"arrayC: ";
    for (int i = 0; i < nc; i++){
        cout<<arrayC[i]<<" ";
    }   
} // Run this code 1 time without error ://. I feel....

#include <iostream>
using namespace std;

int main(){
    int na = 6,nb = 5;
    char arrayA[na] = "VoDuc";
    char arrayB[nb] = "Thang";
    int nc = na +nb;
    char arrayC[nc] = {};

    for (int i = 0; i < na; i++){
        arrayC[i] = arrayA[i];
    }
     
    for (int i = 0; i < nb; i++){
        arrayC[i+na] = arrayB[i];
    }
    
    cout<<"arrayC: ";
    for (int i = 0; i < nc; i++){
        cout<<arrayC[i];
    }  
}

// Cho trước mảng a có n phần tử. Tìm giá trị lớn nhất trong mảng a (gọi là max).

#include<iostream>
using namespace std;

int main(){
    int arrayA [9] = {2,5,7,19,12,11,10,5};
    int size = sizeof(arrayA)/sizeof(arrayA[0]);
    int max = arrayA[0];
    for (int i = 0; i < size; i++){
        if (arrayA[i]>max){
            max = arrayA[i];
        } 
    }
    cout<<max;
} // First time without error again. I... uhm....

// Cho trước mảng a kích thước n. 
// Hãy sắp xếp mảng a đó sao cho các phần tử có giá trị tăng dần.

/// Sắp xếp nổi bọt (Bubble Sort)
#include<iostream>
using namespace std;

void HoanVi(int &a,int &b){
    int temp = a;
    a = b;
    b = temp;
}

int main(){
    #define n 10
    int arrayA[n] = {7,5,9,19,12,5,2,5,5,10};

    cout<<"arrayA: ";
                for (int k = 0; k < n; k++){
                    cout<<arrayA[k]<<" ";
                }

    for (int i = 0;i<n;i++){
        for (int j = 0; j < n; j++){
            if (arrayA[i] < arrayA[j]){
                HoanVi(arrayA[i],arrayA[j]);
                cout<<"\narrayA: ";
                for (int k = 0; k < n; k++){
                    cout<<arrayA[k]<<" ";
                }
            }
        }
    }

    cout<<"\nlast arrayA: ";
    for (int i = 0; i < n; i++){
        cout<<arrayA[i]<<" ";
    }
}

// Quick Sort.

#include<iostream>
using namespace std;

void swap(int *a,int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
}
int partition(int arr[],int l,int h){
	int x=arr[h];
	int i=l-1;
	for(int j=l; j<=h-1; j++){
		if(arr[j]<=x){
			i++;
			swap(&arr[i],&arr[j]);
		}
	}
	swap(&arr[i+1],&arr[h]);
	return(i+1);
}
void quicksort(int arr[],int l,int h){
	if(l<h){
		int p=partition(arr,l,h);
		quicksort(arr,l,p-1);
		quicksort(arr,p+1,h);
	}
}
int main(){
    #define n 10
    int arrayA[n] = {7,5,9,19,12,5,2,5,5,10};
    partition(arrayA,0,n);
    quicksort(arrayA,0,n);
    cout<<"\narrayA: ";
        for (int k = 0; k < n; k++){
        cout<<arrayA[k]<<" ";
        }
}