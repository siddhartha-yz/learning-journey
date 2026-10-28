#include <iostream>
#include <string>
using namespace std;

int main()
{
    string input;
    cin >> input;
    if (input == "#")
    {
        cout << "invalid 0";
        return 0;
    }
    
    if (!(input[0] == '_' || ('a' <= input[0] && input[0] <= 'z') || ('A' <= input[0] && input[0] <= 'Z')))
    {
        cout << "invalid 1";
        return 0;
    }
    
    for (int i = 1; i < input.size() - 1; i++)
    {
        if (!(input[i] == '_' || 
            ('a' <= input[i] && input[i] <= 'z') || 
            ('A' <= input[i] && input[i] <= 'Z') || 
            ('0' <= input[i] && input[i] <= '9')))
        {
            cout << "invalid" << " " << i + 1;
            return 0;
        }
        
    }
    cout << "valid 0";
    return 0;
}

