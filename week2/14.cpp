#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        float d, p, a, b;
        cin >> d >> p >> a >> b;
        cout << ((a / d) < (b / p) ? -1 : ((a / d) == (b / p) ? 0 : 1)) << endl;
    }
    return 0;
}
