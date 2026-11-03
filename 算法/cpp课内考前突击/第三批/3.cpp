#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a1, a2 ,a3;
    int b1 = 0, b2 = 0, b3 = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a1 >> a2 >> a3;
        if (a1 + a2 + a3 >= 2)
        {
            continue;
        }
        
        if (a1 == 1)
        {
            b1++;
        }
        if (a2 == 1)
        {
            b2++;
        }
        if (a3 == 1)
        {
            b3++;
        }
                        
    }
    cout << b1 << ' ' << b2 << ' ' << b3;
    
    return 0;
}
