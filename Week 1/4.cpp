#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cout << ((n % 4 == 0) ? (n + 1) : (n - 1)) << endl;
    return 0;
}
