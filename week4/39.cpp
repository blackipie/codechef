#include <iostream>
using namespace std;

int main()
{

    int t, N, X;
    cin >> t;

    while (t--)
    {
        cin >> N;
        cout << " ";
        cin >> X;
        cout << ((X == 0 || X == N) ? 0 : (X <= N / 2) ? X:N-X)
             << endl;

    }

    return 0;
}