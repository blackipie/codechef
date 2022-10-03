// https://shafin.vercel.app
#include <iostream>
using namespace std;

int main()
{
    int t, a, b, c, d;
    cin >> t;
    while (t--)
    {
        cin >> a >> b >> c >> d;
        cout << (((d + b) >= a && c >= a) ? "YES" : "NO") << endl;
    }
    return 0;
}