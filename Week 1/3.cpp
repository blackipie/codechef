#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int distance = max((a > c ? a - c : c - a), (b > d ? b - d : d - b));
        cout << distance << endl;
    }
    return 0;
}
