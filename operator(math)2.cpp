#include <iostream>
using namespace std;
int main()
{
    int a,b,c,result;
    a =5; b=5; c=10;

    result = (a==b) && (c>b);
    cout <<"(a=b) and (c>b) is "<<result<<endl;
    result = (a==b) && (c<b);
    cout <<"(a=b) and (c<b) is "<<result<<endl;
    result = (a==b) || (c<b);
    cout <<"(a=b) and (c<b) is "<<result<<endl;
    result = (a!=b) || (c<b);
    cout <<"(a!=b) and (c<b) is " <<result<<endl;
    result = !(a!=b);
    cout <<"(NOT a!=b) is " << result<<endl;  
    result = !(a==b);
    cout <<"(NOT a==b) is "<<result<<endl;
}

// Toán tử AND (bit)
#include <iostream>
#include <bitset>
using namespace std;
int main()
{
    int a,b,c;
    a=12; b =85;
    std::cout <<"a = "<<std::bitset<8>(a);
    cout <<"("<<a<<")"<<endl;
    std::cout <<"b = "<<std::bitset<8>(b);
    cout <<"("<<b<<")"<<endl;
    c = a&b;
    std::cout <<"c = "<<std::bitset<8>(c);
    cout <<"("<<c<<")"<<endl;
}

// Toán tử OR (bit)
#include <iostream>
#include <bitset>
using namespace std;
int main()
{
    int a,b,c;
    a=12; b =85;
    std::cout <<"a = "<<std::bitset<8>(a);
    cout <<"("<<a<<")"<<endl;
    std::cout <<"b = "<<std::bitset<8>(b);
    cout <<"("<<b<<")"<<endl;
    c = a|b;
    std::cout <<"c = "<<std::bitset<8>(c);
    cout <<"("<<c<<")"<<endl;
}

// Toán tử XOR (bit)
#include <iostream>
#include <bitset>
using namespace std;
int main()
{
    int a,b,c;
    a=12; b =85;
    std::cout <<"a = "<<std::bitset<8>(a);
    cout <<"("<<a<<")"<<endl;
    std::cout <<"b = "<<std::bitset<8>(b);
    cout <<"("<<b<<")"<<endl;
    c = a^b;
    std::cout <<"c = "<<std::bitset<8>(c);
    cout <<"("<<c<<")"<<endl;
}

// Toán tử NOT(bit)
#include <iostream>
#include <bitset>
using namespace std;
int main()
{
    int a,b,c;
    a=12; b =85;
    std::cout <<"a = "<<std::bitset<8>(a);
    cout <<"("<<a<<")"<<endl;
    c = ~a;
    std::cout <<"c = "<<std::bitset<8>(c);
    cout <<"("<<c<<")"<<endl;
}

// Toán tử dịch trái  
// Dịch chuyển dãy bit về bên trái, thêm "0" vào cuối dãy
// Có thể dịch n lần (a<<n)
// Dịch trái bit sẽ làm số càng lớn hơn.
#include <iostream>
#include <bitset>
using namespace std;
int main()
{
    int a,c,d,g;
    a=12; 
    std::cout <<"a = "<<std::bitset<8>(a);
    cout <<"("<<a<<")"<<endl;
    c = a<<1;
    std::cout<<"c = "<<std::bitset<8>(c);
    cout<<"("<<c<<")"<<endl;
    d = a<<2;
    std::cout<<"d = "<<std::bitset<8>(d);
    cout<<"("<<d<<")"<<endl;    
    g = a<<6;
    std::cout<<"g = "<<std::bitset<16>(g);
    cout<<"("<<g<<")"<<endl;
}


// Toán tử dịch phải 
// Dịch chuyển dãy bit về bên phải. Thêm "0" hoặc "1" vào đầu dãy, phụ thuộc vào dấu của số.
// Dấu của số sẽ được giữ nguyên.
// Có thể dịch n lần (a>>n)
// Dịch phải bit sẽ làm số nhỏ hơn. 
// Dịch phải vô hạn số dương sẽ ouput số nhỏ nhất là 0
// Dịch phải vô hạn số âm sẽ output số lớn nhất là -1
#include <iostream>
#include <bitset>
using namespace std;
int main()
{
    int a,b,c,d,e,f,g,h;
    a=-12; 
    std::cout<<"a = "<<std::bitset<8>(a);
    cout<<"("<<a<<")"<<endl;
    c = a>>1;
    std::cout<<"c = "<<std::bitset<8>(c);
    cout <<"("<<c<<")"<<endl;
    b = 12; 
    std::cout<<"b = "<<std::bitset<8>(b);
    cout<<"("<<b<<")"<<endl;
    d = b>>1;
    std::cout<<"d = "<<std::bitset<8>(d);
    cout<<"("<<d<<")"<<endl;
    e = b>>2;
    std::cout<<"e = "<<std::bitset<8>(e);
    cout<<"("<<e<<")"<<endl;
    f = b>>3;
    std::cout<<"f = "<<std::bitset<8>(f);
    cout<<"("<<f<<")"<<endl;
    g = b>>9;
    std::cout<<"g = "<<std::bitset<8>(g);
    cout<<"("<<g<<")"<<endl;
    h = a>>9;
    std::cout<<"h = "<<std::bitset<8>(h);
    cout<<"("<<h<<")"<<endl;
}

