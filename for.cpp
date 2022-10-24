#include <iostream>
using namespace std;
int main ()
{
    for (int i = 0; i <= 10; i = i+2)
    {
        cout<<i<<" ";
    }
    
}

#include <iostream>
using namespace std;
int main()
{
    int n=6,m=3;
    if (n<10 && m <20)
    {
        for(int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout<<i<<" + "<<j<<" = "<<i+j<<endl;
            }
            
        }
        
    }
    
}


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