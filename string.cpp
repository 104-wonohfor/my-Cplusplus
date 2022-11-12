#include <iostream>
#include <cstring>
using namespace std;
int main(){
    string str1 = "Apple";
    string str2 = "apple";
    string str3 = "apples";
    string str4 = "orange";

    string str5 = str1; cout<<str5<<endl;

    // seem toán tử quan hệ trong string là so sánh độ lớn trong mã ASCII
    bool t1 = (str1 == str2); cout<<t1<<endl;
    bool t2 = (str1 != str2); cout<<t2<<endl;
    bool t3 = (str1 < str2); cout<<t3<<endl;
    bool t4 = (str4 > str3); cout<<t4<<endl;

    string str6 = str2 + " " +  str4; cout<<str6<<endl;

    string myMsg = "How are you doing?";
    cout<<myMsg[4]<<" "<<myMsg[12]<<myMsg[13]<<myMsg[16]<<endl;
}


#include <iostream>
#include <cstring>
using namespace std;
int main(){
    // Hàm s.length() - Trả về số lượng ký tự trong string s.
    string str1 = "VoDucThang";
    cout<<"length of str1: "<<str1.length()<<endl;

    // Hàm s.substr(x, y) - Rút trích một chuỗi con với chiều dài y bắt đầu tại vị trí x. 
    // Nếu không có y, một chuỗi con từ vị trí x tới cuối chuỗi sẽ được rút trích.
    string str2 = "Hello World, Hello 104, Welcome to C++";
    cout<<"str2 from 4, length = 10: "<<str2.substr(4,10)<<endl;
    cout<<"str2 from 4 to end: "<<str2.substr(4)<<endl;
    cout<<str2[10]<<endl; // ở đây là bắt đầu từ 4 và rút ra 10 ký tự
                          // not "from [4] to [10]""
        
    // Hàm s.find(r) - Kiểm tra chuỗi string r có xuất hiện trong chuỗi s hay không. 
    // Nếu có thì trả về vị trí bắt đầu xuất hiện chuỗi r trong chuỗi s.   
    string str3 = "VoDucThang gas";
    cout<<str3.find("ga")<<endl;
    cout<<str3.find("a")<<endl;
    cout<<str3.find("s")<<endl;
    int x = str3.find("a") + 1;
    string str4 = str3.substr(x);
    cout<<str4<<endl;
    cout<<str4.find("a")+x<<endl;
    
    // Hàm s.erase(x, n) - Xóa n ký tự bắt đầu tại vị trí x.
    string str5 = "Hello World, Hello 104, Welcome to C++";
    str5.erase(5,2);
    cout<<"str5 after erased: "<<str5<<endl;

    // Hàm s.replace(x, n, str) - Thay thế n ký tự tại vị trí bắt đầu là x bằng chuỗi str. 
    // Lưu ý: chiều dài của str có thể lớn hơn n.
    string str6 = "Hello World, Hello 104, Welcome to C++";
    str6.replace(5,10,"101010101010101010103");
    cout<<"str6 after changed: "<<str6<<endl; // Tức là xóa n ký tự bắt đầu từ x, và
                                              // chèn thêm chuỗi (có thể dài, ngắn hơn n ký tự)
    string str7 = "Hello World, Hello 104, Welcome to C++";
    str7.replace(5,10,"103");
    cout<<"str7 after changed: "<<str7<<endl;

    // Hàm s1.compare(s2) - So sánh chuỗi s1 với s2. Giá trị trả về là -1 nếu s1 < s2, 
    // bằng 0 nếu s1 == s2, là 1 nếu s1 > s2.
    string str8 = "Apple";
    string str9 = "apple";
    string str10 = "apples";
    string str11 = "orange";

    cout<<str8.compare(str9)<<endl;
    cout<<str9.compare(str9)<<endl;
    cout<<str11.compare(str10)<<endl; // // seem toán tử quan hệ như ở trên

    // Hàm s1.swap(s2) - Hoán đổi nội dung hai chuỗi.
    str8.swap(str11);
    cout<<"str8: "<<str8<<endl;
    cout<<"str11: "<<str11<<endl;

    // Hàm s1.insert(index, s2) - Thêm chuỗi s2 vào s1 sau vị trí index.
    string str12 = "Hello, Hello 104!";
    string str13 = " World";
    str12.insert(5,str13);
    cout<<str12<<endl;
}