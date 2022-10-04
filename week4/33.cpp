#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, s;
        cin >> n >> s;
        cout << ((n > s) ? s : (s > n)?(abs((s - n) - n)):n) << endl;
    }

    return 0;
}
