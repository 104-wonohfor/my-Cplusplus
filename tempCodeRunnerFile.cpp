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