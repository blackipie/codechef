#include <iostream>
#include <set>
#include <vector>
//Q copy kar raha hai bhai
using namespace std;

class FenwickTree
{
    int n;
    vector<int> ft;

    int lsOne(int x)
    {
        return (x & (-x));
    }

public:
    FenwickTree(int s)
    {
        n = s;
        ft.resize(n + 1, 0);
    }
    int RSQ(int a)
    {
        int count = 0;
        while (a)
        {
            count += ft[a];
            a -= lsOne(a);
        }
        return count;
    }
    void updateFt(int a, int v = 1)
    {
        while (a <= n)
        {
            ft[a] += v;
            a += lsOne(a);
        }
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n, d;
        cin >> n >> d;
        vector<int> p(n);
        for (int i = 0; i < n; i++)
        {
            cin >> p[i];
        }
        long int swaps = 0;
        for (int i = 0, k = n - 1; i < d && swaps != -1 && k >= 0; i++, k--)
        {
            FenwickTree f(n / d + 2);
            for (int j = k; j >= 0; j -= d)
            {
                if ((abs(p[j] - (j + 1))) % d)
                {
                    swaps = -1;
                    break;
                }
                long int x = f.RSQ(p[j] / d + 1);
                f.updateFt(p[j] / d + 1);
                p[j] -= d * x;
                swaps += (j + 1 - p[j]) / d;
            }
        }
        cout << swaps << endl;
    }
}