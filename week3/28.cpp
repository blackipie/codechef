#include <iostream>
using namespace std;

int main()
{
    int t, n, i;
    float a, b;
    cin >> t;
    while (t--)
    {
        cin >> n;
        a = (float)(0.143 * n);
        b = 1;
        for (i = 1; i <= n; i++)
        {
            b = (float)b * a;
        }
        cout << ((float(b - (int)b) < 0.5) ? (int)b : (int)b + 1) << endl;
    }
    return 0;
}