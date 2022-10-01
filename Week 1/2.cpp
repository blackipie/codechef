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
        int gap = ((x % 3 == 0) ? ((x / 3) - 1) : (x / 3));
        cout << x * y + gap * z << endl;
    }
    return 0;
}
