#include <iostream>
using namespace std;

int main()
{
    int t;
    float s, a, b, c;
    cin >> t;
    while (t--)
    {
        cin >> s >> a >> b >> c;
        cout << (((s + (c * s) / 100) >= a && (s + (c * s) / 100) <= b) ? "yes" : "no") << endl;
    }
    return 0;
}