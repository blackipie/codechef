#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;

        cout << ((x % 4 == 0) ? "North" 
        : (x % 4 == 1) ? "East" 
        : (x % 4 == 2)   ? "South" 
        : "West")
        << endl;
    }
    return 0;
}