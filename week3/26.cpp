#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        double n, x, y;
        cin >> n >> x >> y;
        cout << ( ((n * sqrt(2)) / x) < ((2 * n) / y) ? "Stairs" : "Elevator") << endl;
    }
    return 0;
}