#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long s, n;
        cin >> s >> n;
        long res = 0;

        cout << ((s % n == 0) ? (s / n) 
              : (s > n) ? (s % n == 1 || s % 2 == 0) ? ((s / n) + 1) 
              : (s / n + 2)
              : (s == 1 || s % 2 == 0)?1:2)
             << endl;
    }
    return 0;
}
//bhai copy maat kar