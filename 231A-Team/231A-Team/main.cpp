#include <iostream>
using namespace std;

int main(void)
{
    int n, count=0;
    int petya, vasya, tonya;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cin >> petya >> vasya >> tonya;
        if ((petya + vasya + tonya) >= 2)
        {
            count++;
        }
    }

    cout << count;
}