#include <iostream>
using namespace std;

int main(void)
{
    int n, k, score[50], winners=0, max;
    cin >> n >> k;
    for (int i = 0; i < n ; i++)
    {
        cin >> score[i];
        if ( i+1 == k )
        {
            max=score[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (score[i] >= max && score[i]>0 )
            winners++;
    }
    cout << winners;

    return 0;
}