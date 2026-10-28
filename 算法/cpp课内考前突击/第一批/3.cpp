#include <iostream>
using namespace std;
int main()
{
    char dangqian = ' ', qianyige = ' ', zuiduo = ' ';
    int sum2 = 1, sum1 = 0;
    while (dangqian != '#')
    {
        qianyige = dangqian;
        cin >> dangqian;
        if (dangqian == '#') break;
        if (dangqian == qianyige)
        {
            sum2++;
        }
        else{
            sum2 = 1;
        }
        if (sum2 > sum1)
        {
            zuiduo = dangqian;
            sum1 = sum2;
        }
        
    }
    cout << zuiduo << " " << sum1;
    
}
