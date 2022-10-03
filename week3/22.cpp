#include <iostream>
using namespace std;

int main()
{
    // visit my site : https://shafin.vercel.app
    int t, h, w, g, a;
    cin >> t;
    while (t--)
    {
        cin >> h >> w >> g >> a;
        cout << (((h * (w + (g / 2))) <= a) ? "YES" : "NO") << endl;
    }
    return 0;
}

