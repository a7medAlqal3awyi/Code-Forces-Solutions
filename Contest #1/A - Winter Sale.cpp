#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
    int X, P;
    cin >> X >> P;
   float original = P / (1.0 - (X/100.0) );
    cout << fixed << setprecision(2) << original << endl;
}
