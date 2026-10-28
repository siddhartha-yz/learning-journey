#include <iostream>
#include <string>

using namespace std;

bool zichengchu(int num1){
    int dangqianwei, num2 = num1;
    
    do
    {
        dangqianwei = num2 % 10;
        num2 /= 10;
        if (dangqianwei == 0)
        {
            return false;
        }
        
        if (num1 % dangqianwei != 0)
        {
            return false;
        }
        
    } while (num2 != 0);
    return true;
    
    
}

int main()
{
    int min, max, sum = 0;
    int num_min, num_max = -1;
    cin >> min >> max;
    num_min = max;
    for (int i = min; i <= max; i++)
    {
        if (zichengchu(i))
        {
            sum++;
            if (i > num_max)
            {
                num_max = i;               
            }
            if (i < num_min)
            {
                num_min = i;
            }
            
            
        }
        
    }
    
    if (sum == 0)
    {
        cout << "0 -1 -1";
    }
    else{
        cout << sum << " " << num_min << " " << num_max;
    }
    
    return 0;
}
