#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, y;
        cin >> n >> x >> y;
        cout << (((n + 1) * y >= x) ? "yes" : "no") << endl;
    }
    return 0;
}
