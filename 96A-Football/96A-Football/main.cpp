#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    string s;
    int count = 0;
    cin >> s;
    for (int i = 1; i < s.length(); i++)
    {
        if (s[i] == s[i-1]) 
        {
            count++;
            if (count == 6) 
            {
                cout << "YES";
                return 0;
            }
        }
        else
        {
            count = 0;
        }
    }
    cout << "NO";
    return 0;
}