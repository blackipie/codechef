
#include <iostream>

using namespace std;

int opsize[1001], poz[1001][31];
int nop;

int isPrime(int P)
{
    for (int i = 2; i * i <= P; i++)
    {
        if (P % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

void solve(int i, int j)
{
    int len = j - i + 1;
    if (len == 1)
    {
        return;
    }
    for (int P = len; P >= 2; P--)
    {
        if ((len % P == 0) and isPrime(P))
        {
            int Q = len / P, k, l;
            for (k = i; k <= j; k += Q)
            {
                solve(k, k + Q - 1);
            }
            for (k = 0; k < Q; k++)
            {
                nop++;
                opsize[nop] = P;
                for (l = 1; l <= P; l++)
                {
                    poz[nop][l] = i + k + (l - 1) * Q;
                }
            }
            break;
        }
    }
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int N, i, j;
        cin >> N;
        for (i = 1; i <= N; i++)
        {
            cin >> j;
        }
        nop = 0;
        solve(1, N);
        cout << nop << "\n";
        for (i = 1; i <= nop; i++)
        {
            cout << opsize[i];
            for (int j = 1; j <= opsize[i]; j++)
            {
                cout << " " << poz[i][j];
            }
            cout << "\n";
        }
    }
    return 0;
}

