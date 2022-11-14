#include <iostream>
using namespace std;
#define MAXC 100

int CheckNumber(int a[2][3],int x){
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 3; j++){
            if (a[i][j]==x){
                return 1;
            }
        }
    }
    return 0;
}
int TongArray(int a[2][3]){
    int sum=0;
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 3; j++){
            sum = sum + a[i][j];
        }
    }
    return sum;
}
int MaxArray(int a[2][3]){
    int max = a[0][0];
    for (int i = 0; i < 2; i++){
       for (int j = 0; j < 3; j++){
            if (a[i][j]>=max){
                max = a[i][j];
            }
       }
    }
    return max;
}
int main(){
    int result,x,sum,max;
    int array[2][3] = {{3,4,5},{-11,2,53}};

    cout<<"Check number: ";
    cin>>x;
    result = CheckNumber(array,x);
    if (result == 1){
        cout<<x<<" is in array."<<endl;
    }
    else if (result == 0 ){
        cout<<x<<" is not in array"<<endl;
    }
    
    sum = TongArray(array);
    cout<<"Sum of array: "<<sum<<endl;

    max = MaxArray(array);
    cout<<"Max number in array is: "<<max<<endl;
}
