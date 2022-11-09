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