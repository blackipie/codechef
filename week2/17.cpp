#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, a, b, d;
        cin >> x >> y >> a >> b >> d;

        cout << ((((a + b) * d) <= (x + y) && (a * d <= x) && (b * d <= y)) ? "yes" : "no")
             << endl;
    }
    return 0;
}