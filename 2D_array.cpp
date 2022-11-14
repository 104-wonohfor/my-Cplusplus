#include <iostream>
using namespace std;

int main(){
    int temp [3][4] = {50,10,20,10,30,15,90,21,42,52,53,12};
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 4; j++){
           cout<<temp[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    int temp2 [3][4] = {{50,10,20,10},{30,15,90,21},{42,52,53,12}};
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 4; j++){
           cout<<temp2[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    int temp3 [7][4] = {{50,10,20},{30,15,90},{42,52,53}};
    for (int i = 0; i < 7; i++){
        for (int j = 0; j < 4; j++){
           cout<<temp3[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<temp3[1][2]<<endl;
}

#include <iostream>
using namespace std;

int main(){
    int temp [3][4] = {{50,10,20,10},{30,15,90,21},{42,52,53,12}};
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 4; j++){
            cout<<"temp["<<i<<"]["<<j<<"] = "<<temp[i][j]<<endl;
        }
    }
    cout<<"output temp: "<<endl;
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 4; j++){
            cout<<temp[i][j]<<" ";
        }
        cout<<endl;
    }
}


#include <iostream>
using namespace std;
#define MAXR 100
#define MAXC 100

void InputArray(int a [][MAXC], int &m,int &n){
    cout<<"Input number of rows: ";
    cin>>m;
    cout<<"Input number of columns: ";
    cin>>n;

    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            cout<<"a["<<i<<"]["<<j<<"] = ";
            cin>>a[i][j];
        }
    }
}

void OutputArray(int a [][MAXC], int &m, int &n){
    cout<<"Output Array: "<<endl;
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int temp[MAXR][MAXC];
    int m,n;
    InputArray(temp,m,n);
    OutputArray(temp,m,n);
}


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




