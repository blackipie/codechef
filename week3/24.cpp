#include <iostream>
using namespace std;

int main()
{
    int t, a, b;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        int i = 1, j = 1;
        while (a >= 0 && b >= 0)
        {
            a = a - (2 * i - 1);
            if (a < 0)
            {
                cout << "Bob" << endl;
                break;
            }
            b = b - (2 * j);
            if (b < 0)
            {
                cout << "Limak" << endl;
                break;
            }
            i++, j++;
        }
    }
    return 0;
}
