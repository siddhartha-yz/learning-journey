#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double input;
    cin >> input;
    cout << fixed << setprecision(2);
    if (input <= 100)
    {
        cout << input * 0.5;
    }
    else if (100 < input && input <= 200)
    {
        cout << 100 * 0.5 + (input - 100) * 0.8;
    }
    else{
        cout << 100 * 0.5 + 100 * 0.8 + (input - 200) * 1.2;
    }
    
    
    return 0;
}
