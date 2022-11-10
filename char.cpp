#include <iostream>
#include <cstring>
#include <limits>
using namespace std;

int main(){
    char hoten[30];
    char ngaysinh[9];
    char truong1[]= {'T','H','P','T',' ','N','D','1','\0'};
    char truong2[10] = "THPT ND1";
    char autolength[] = "auto1";

    
    cout<<truong1<<endl;
    cout<<truong2<<endl;
    cout<<sizeof(truong1)<<endl;
    cout<<sizeof(truong2)<<endl;
    cout<<sizeof(autolength)<<endl;

    char input1[50];
    cout<<"Input: ";
    cin.getline(input1,50);
    cout<<"Output: "<<input1<<endl;

    //Hàm strlen(char s[]) - Trả về chiều dài chuỗi s
    int LengthOfChar;
    LengthOfChar = strlen(input1);
    cout<<"Length of input1: "<<LengthOfChar<<endl;

    //Hàm strcat(char s1[], char s2[]) - Nối chuỗi s2 vào cuối chuỗi s1.
    char input2[] = ", Hello 526!";
    cout<<strcat(input1,input2)<<endl; 
    cout<<input1<<endl; //input1 changed to result.
    cout<<input2<<endl; //input2 remains.

    //Hàm cin.ignore(int n, char ch) -
    //Bỏ qua n ký tự trước khi gặp ký tự 'ch' trong bộ nhớ đệm. 
    //Thường dùng trước lệnh cin.getline().
    int a;
    char b[100];
    cin>>a;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cin.getline(b,100);      
    cout << a << " " << b << " ";  
    cout << "Ket thuc"; //Nếu không sử dụng cin.ignore(), biến b sẽ không được input.
                        //cin.ignore(numeric_limits<streamsize>::max(), '\n');    
}

    // Hàm isalpha(char ch) - Kiểm tra giá trị trong ch có phải là chữ cái hay không.
    // Hàm isdigit(char ch) - Kiểm tra giá trị trong ch có phải chữ số hay không.
#include <iostream>
#include <cstring>
using namespace std;
int main(){
    char c[50] = "Vo1Duc2Thang3tttt4";
    char d[10] = {4,5,'m',1,'s','t',12};

    for (int i = 0; i < strlen(c); i++){
        if (isalpha(c[i])){
            cout<<c[i]<<" ";
        }
    }
    cout<<endl;
    for (int i = 0; i < strlen(c); i++){
        if (isdigit(c[i])){
            cout<<c[i]<<" ";
        }   
    }    
    cout<<endl;
    for (int i = 0; i < strlen(d); i++){
        if (isdigit(d[i])){
            cout<<d[i]<<" ";
        }   
    }    
    cout<<endl;
    for (int i = 0; i < strlen(d); i++){
        if (isalpha(d[i])){
            cout<<d[i]<<" ";
        }
    }
            // isalpha() return trong cả 2 chuỗi.
            // isdigit() return trong chuỗi liên tục như chuỗi c, 
            // không return trong chuỗi có ký tự(kể cả số) trong dấu '' như chuỗi d.
}

    // Hàm isspace(char ch) - Kiểm tra giá trị trong ch có phải khoảng trắng hay không.
#include <iostream>
#include <cstring>
using namespace std;
int main(){
    char a[] = "Vo Duc Thang";
    int count = 0;
    for (int i = 0; i < strlen(a); i++){
        if (isspace(a[i])){
            cout<<"space in position: a["<<i<<"]"<<endl;
            count++;
        }
    }
    cout<<"Number of spaces: "<<count<<endl;

    // Hàm strlwr(char s[]) - Đổi tất cả ký tự của s sang chữ thường.
    strlwr(a);
    cout<<a<<endl;
    // Hàm strupr(char s[]) - Đổi tất cả ký tự của s sang chữ hoa.
    strupr(a);
    cout<<a<<endl;
}

    // Hàm strcmp(char s[], char t[]) - So sánh 2 chuỗi s và t,
    // trả về giá trị âm nếu s<t, 0 nếu s bằng t, giá trị dương nếu s>t.
#include <iostream>
#include <cstring>
using namespace std;
int main(){
    int result;
    char a[] = "VoDucThang";
    char b[] = "Thang";
    result = strcmp(a,b);
    if (result == 0){
        cout<<"char a va char b giong nhau"<<endl;
    }
    else if (result<0){
        cout<<"char a nho hon char b"<<endl;
    }
    else if (result>0){
        cout<<"char a lon hon char b"<<endl;
    }
}

    // Hàm strcpy(char s[], char t[]) - Gán nội dung của chuỗi t cho chuỗi s.
#include <iostream>
#include <cstring>
using namespace std;
int main(){
    char a[] = "VoDucThang";
    char b[4]= "TTT";
    cout<<b<<endl;
    strcpy(b,a);
    cout<<b<<endl;
}               // Hàm strcpy() tự động thêm kích thước cho biến b.