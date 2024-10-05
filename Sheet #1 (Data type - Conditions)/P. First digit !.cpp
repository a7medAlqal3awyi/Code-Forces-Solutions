#include  <iostream>
using namespace std;

int main()
{
    int X;
    cin >> X;
    string numStr = to_string(X);
    int firstDigit = numStr[0] - '0';
    firstDigit % 2 == 0 ? cout << "EVEN" << endl : cout << "ODD" << endl;
}
