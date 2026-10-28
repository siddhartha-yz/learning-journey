#include <iostream>
#include <iomanip>
using namespace std;
long leicheng(int k){
    long multi = 1;
    if (k == 0)
    {
        return 1;
    }
    else{
        for (int i = 1; i <= k; i++)
        {
            multi *= i;
        }
        return multi;   
    }
    
}

int main()
{
    long double eps, sum = 0;

    cin >> eps;
    for (int i = 0; 1/(long double)(leicheng(i)) >= eps; i++)
    {
        sum += 1.0/(long double)leicheng(i);
    }
    cout << fixed << setprecision(6);
    cout << sum;
    
    return 0;
}
