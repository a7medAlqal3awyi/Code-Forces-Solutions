#include <iostream>
using namespace std;

int main()
{
    double n, k, a;
    cin >> n >> k >> a;
    long long ll = (n * k) / a;
    double d = (n * k) / a, diff = d - ll;
    if (diff > 0)
    {
        cout << "double\n";
    }
    else if (d > 2147483647)
    {
        cout << "long long\n";
    }
    else
        cout << "int\n";
}
