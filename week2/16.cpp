#include <iostream>
using namespace std;

int main()
{
    // copy karlo bro
    int t;
    cin >> t;
    while (t--)
    {
        int k;
        cin >> k;
        int y = 0;
        for (int i = 1; i <= k; i++)
        {
            y = (i % 2 != 0) ? (y + 3) : (y - 1);
        }
        cout << y << endl;
    }
    return 0;
}