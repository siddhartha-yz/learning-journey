#include <iostream>

using namespace std;

int main()
{
    int n;
    double a1, a2;
    int sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a1 >> a2;
        if (a1 < a2)
        {
            sum++;
        }
        
    }
    cout << sum;
    
    return 0;
}
