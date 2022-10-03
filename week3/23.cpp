#include <iostream>
using namespace std;

int main()
{
    int t, n, d, a, b, c;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n >> d >> a >> b >> c;
        cout << ((n * d >= 42)? c: (n * d >= 21) ? b : (n * d >= 10) ? a: 0)<< endl;
    }
}