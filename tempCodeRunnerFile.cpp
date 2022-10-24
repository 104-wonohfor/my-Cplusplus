#include <iostream>
using namespace std;
int main()
{
    int i;
    for (i = 0; ; i++){//không có điều kiện lặp
	if (i >= 10)
		break;//thoát vòng lặp for
	cout<<i<<endl;
}
}