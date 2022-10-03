#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int i, j, n, a[30];

        j = 0;
        cin >> n;
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (i = 0; i < n; i++)
        {
            if ((a[i] % 7 != 6) && (a[i] % 7 != 0))
            {
                j++;
            }
        }
        cout << 8 + j << endl;
    }
    return 0;
}