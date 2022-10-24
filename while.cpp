#include <iostream>
using namespace std;
int main()
{
    int x=-5;
    while (x<=5)
    {
        cout<<x<<" ";
        ++x;
    }
}

#include <iostream>
using namespace std;
int main()
{
    int n = 6,m=3;
    if (n < 10 && m < 20)
{
	while (n >= 1)
	{
		while (m >= 1)
		{
			cout<<m<<endl;
			m--;
		}
		n--;
        cout<<"n = "<<n<<endl;
	}
}
}

