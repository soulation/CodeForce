#include <iostream>
#include <string>
#include <cstdio>
using namespace std;

int main(void)
{
    string s1, s2;
    cin >> s1;
    cin >> s2;
    for (int i = 0; i <= s1.length(); i++)
    {
        s1[i] = tolower(s1[i]);
        s2[i] = tolower(s2[i]);
    }
    if (s1.compare(s2) == -1)
    {
        cout << -1;
    }
    else if (s1.compare(s2) == 1)
    {
        cout << 1;
    }
    else
        cout << 0;
    return 0;
}