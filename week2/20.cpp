#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, z;
        cin >> x >> y >> z;
        cout << ((x < z && y < z && x + y <= z) ? "YES" : "NO") << endl;
    }
    return 0;
}