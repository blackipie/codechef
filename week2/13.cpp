#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int z, y, a, b, c;
        cin >> z >> y >> a >> b >> c;
        cout << (((z - y) >= (a + b + c)) ? "yes" : "no") << endl;
    }
    return 0;
}
