#include <iostream>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        cout << (x % 2 == 0 ? (y % 2 == 0 ? "Janmansh" : "jay") : (y % 2 == 0 ? "Jay" : "janmansh"))
             << endl;
    }
    return 0;
}
