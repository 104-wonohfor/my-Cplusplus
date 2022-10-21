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