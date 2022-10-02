#include <iostream>
using namespace std;

int main()
{
    // thank you bol do yar
    int t, a, b;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        cout << (((a + b) % 2 == 0) ? "Bob" : "Alice") 
             << endl;
    }
    return 0;
}