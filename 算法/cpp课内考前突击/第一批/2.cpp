#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    long n, sum = 0;
    int d, i=0, k=0, zongweishu = 0;
    cin >> n >> d;
    while (n != 0)
    {
        i = n % 10;//个位，十位，百位....
        if (i != d)
        {
            /* 加上对应位数 */
            sum += i * pow(10, k);
            k++;
        }
        n /= 10;
        zongweishu++;
        
    }
    
    cout << sum << " " << zongweishu - k;
    return 0;
}
