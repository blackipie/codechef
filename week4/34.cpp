#include <bits/stdc++.h>

#define MOD 1000000007
#define MAX 100001
#define ll long long
#define slld(t) scanf("%lld", &t)
#define pd(t) printf("%d\n", t)
#define plld(t) printf("%lld\n", t)
#define pcc pair<char, char>
#define pii pair<int, int>
#define pll pair<ll, ll>
#define tr(container, it) for (typeof(container.begin()) it = container.begin(); it != container.end(); it++)
#define mp(a, b) make_pair(a, b)
#define F first
#define S second

using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll a[n];
        map<int, int> m;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        ll x;
        cin >> x;
        ll ca = 0, cb = 0;
        ll i = 0, j = n - 1;
        while (i <= j)
        {
            if (i == j)
            {
                if (ca >= cb or m[i] > 0)
                    ca++;
                else
                    cb++;
                break;
            }
            ll k = a[j] * x;
            cb++;
            while (k > 0 and i < j)
            {
                if (k >= a[i])
                {
                    k -= a[i];
                    ca++;
                    i++;
                }
                else
                {
                    a[i] -= k;
                    k = 0;
                    m[i]++;
                }
            }
            j--;
        }
        cout << ca << " " << cb << endl;
    }
}