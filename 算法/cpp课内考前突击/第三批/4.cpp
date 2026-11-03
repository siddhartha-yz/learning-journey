#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int vip;
    int x1, y1;
    int x2, y2;
    int x3, y3;
    int time;
    int diaodu = 0;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    cin >> time;
    cin >> vip;
    if((x1 <= x3 && x3 <= x2) && (y2 <= y3 && y3 <= y1)){
        diaodu = 0;
    }else{
        diaodu = 1;
    }
    if (vip == 0)
    {
        if (time <= 10)
        {
            cout << 1 + (diaodu ? 10 : 0);
            return 0;
        }
        if (time > 10)
        {
            cout << 1 + (int)ceil((double)(time-10)/15.0) + (diaodu ? 10 : 0);
            return 0;
        }
        
        
    }
    if (vip == 1)
    {
        if (time <= 30)
        {
            cout << (diaodu ? 10 : 0);
            return 0;
        }
        if (time > 30)
        {
            cout << (int)ceil((double)(time-30)/15.0) + (diaodu ? 10 : 0);
            return 0;
        }
        
        
    }
    
    return 0;
}
