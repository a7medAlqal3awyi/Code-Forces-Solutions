#include <iostream>
using namespace std;

int main() {
    long long a, b, c, d;
    cin >> a >> b >> c >> d;

    // Check all possible combinations with and without parentheses
    if ((a + b * c) == d ||
        (a + b - c) == d ||

        (a - b * c) == d ||
        (a - b + c) == d ||

        (a * b - c) == d ||
        (a * b + c) == d
        ) {
        cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }

    return 0;
}
