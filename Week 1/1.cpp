#include <iostream>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        cout << ((n <= m) ? n : (2 * n - m)) << endl;
    }

    return 0;
}
