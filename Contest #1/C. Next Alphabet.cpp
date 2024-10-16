#include <iostream>
using namespace std;

int main()
{
    char C;
    cin >> C;
    int x = int(C);
    if (x == 122)
    {
        x = 96;
    }
    cout << char(x + 1) << endl;
}
