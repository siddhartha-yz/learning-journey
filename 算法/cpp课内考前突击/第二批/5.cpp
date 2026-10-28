#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    int n;
    long double x0, x1;
    int epoch = 0;
    cin >> n;
    if (n>0)
    {
        x0 = 1;
    }else if (n<0)
    {
        x0 = -1;
    }else{
        cout << "0.000000 0";
        return 0;
    }
    
    x1 = x0;
    
    do
    {
        x0 = x1;
        x1 = (2 * x0 + (long double)n/(x0 * x0))/3;
        epoch++;
    } while (abs(x1 - x0) >= 1e-7);
    cout << fixed << setprecision(6);
    cout << x1 << ' ' << epoch;
    
    return 0;
}
