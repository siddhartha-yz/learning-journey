#include <iostream>

using namespace std;

int main()
{
    int cheshu;
    int sum = 0;
    int meiche = 0;
    int meiche_max = 0;
    int cheshu_qian = 0;
    while (cin >> cheshu)
    {
        if (cheshu == -1)
        {
            break;
        }

        sum += cheshu;
        if (cheshu == 0)
        {
            meiche++;
            if (meiche > meiche_max)
            {
                meiche_max = meiche;
            }
        }else if(cheshu_qian == 0 && cheshu != 0){
             
            meiche = 0;
        }
        cheshu_qian = cheshu;
        
    }
    cout << sum << ' ' << meiche_max;
    
    return 0;
}
