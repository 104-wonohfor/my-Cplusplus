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
