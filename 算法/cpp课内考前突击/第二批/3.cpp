#include <iostream>

using namespace std;

long double pingjunfen(int zuyuanshu, int &sum){
    int chengji;
    sum = 0;
    for (int j = 0; j < zuyuanshu; j++)
        {
            cin >> chengji;
            sum += chengji;
        }
    return (long double)sum / zuyuanshu;
}

int main()
{
    int n;
    int zuyuanshu;
    int max;
    int max_zu;
    long double pingjun, pingjun_max = -1;
    int sum;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> zuyuanshu;
        pingjun = pingjunfen(zuyuanshu, sum);
        if (pingjun > pingjun_max)
        {
            pingjun_max = pingjun;
            max_zu = i+1;
            max = sum;
        }
        
        
    }
    cout << max_zu << " " << max;
    
    return 0;
}
