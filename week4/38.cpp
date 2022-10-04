#include <iostream>
using namespace std;
//thanks bol de yar
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a;
        cout << ((a >= 1 && a <= 25) ?  1 : (a % 25 == 0) ? a / 25: (a / 25) + 1)<< endl;

    }

    return 0;
}
