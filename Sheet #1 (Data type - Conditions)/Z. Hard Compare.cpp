#include  <iostream>
#include <cmath>
using namespace std;

int main()
{
    int A, C;
    long long B, D;
    cin >> A >> B >> C >> D;
    double left = B * log(A);
    double right = D * log(C);
    if (left > right)
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;
}
