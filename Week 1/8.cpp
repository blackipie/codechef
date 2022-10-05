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
        cout << ( (x + y)%2 == 0 ? "Janmansh" : "jay")  << endl;
    }
    return 0;
}
