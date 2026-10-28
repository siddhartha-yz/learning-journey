#include <iostream>
using namespace std;

int main()
{
    int sum = 0, S_max = 0, p;
    cin >> p;
    for (int i = 1; i < p; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            for (int k = 1; k <= j; k++)
            {
                if (i+j+k == p)
                {
                    if (k*k + j*j == i*i)
                    {
                        sum++;
                        if (k * j / 2 > S_max)
                        {
                            S_max = k*j/2;
                        }
                        
                    }
                    
                }
                
            }            
            
        }
        
    }
    cout << sum << " " << S_max;
    return 0;
}
