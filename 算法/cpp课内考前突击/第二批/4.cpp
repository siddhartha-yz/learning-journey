#include <iostream>

using namespace std;

int main()
{
    int n, m;
    int sum = 0;
    int max1=0, max2=0, max3 = 0;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j < n-i; j++)
        {
            if (5*i + 3*j + (n-i-j) == m)
            {
                sum++;
                max1 = i;
                max2 = j;
                max3 = n-i-j;
            }
            
        }
        
    }
    if (sum == 0)
    {
        cout << '0';
    }else{
        cout << sum << ' ' << max1 << ' ' << max2 << ' ' << max3;
    }
    
    
    return 0;
}
