#include <iostream>
using namespace std;
//copy maat kar bhai, khudse kar
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int d, c;
        cin >> d >> c;
        int a, b, k, s, e, f;
        cin >> a >> b >> k >> s >> e >> f;
        a = a + b + k;
        s = s + e + f;
        cout << ((a >= 150 && s >= 150) ? (c < 2 * d) ? "yes" : "no" : (a >= 150 || s >= 150)?(c < d)?"yes":"no" :"no" )<< endl;
       
    }
    return 0;
}