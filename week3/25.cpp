#include <bits/stdc++.h>
using namespace std;

int main()
{
 
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d, e;
        cin >> a >> b >> c >> d >> e;
        cout << (((a + b) <= d && c <= e || (b + c) <= d && a <= e || (a + c) <= d && b <= e) 
             ? "yes" : "no") << endl;
    }
    return 0;
}
