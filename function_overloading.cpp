#include <iostream>
using namespace std;

float absolute(float var){
    if (var<0){
        var = -var;
    }
    return var;
}

int absolute(int var){
    if (var<0){
        var = -var;
    }
    return var;
}

int main(){
    cout<<"Absolute value of -5 is: "<<absolute(-5)<<endl;
    cout<<"Absolute value of -5.5 is: "<<absolute(-5.5f)<<endl;
}


#include <iostream>
using namespace std;
 
void display(int var1, double var2){
    cout<<"INT number is: "<<var1;
    cout<<" and DBL number is: "<<var2<<endl;
}
void display(double var){
    cout<<"DBL number is: "<<var<<endl;
}
void display(int var){
    cout<<"INT number is: "<<var<<endl;
}

int main(){
    int a =6;
    double b = 6.8;

    display(a);
    display(b);
    display(a,b);
}