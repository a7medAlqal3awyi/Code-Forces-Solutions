#include <iostream>
using namespace std;

int main()
{
    int A, B;
    char S;
    cin >> A >> S >> B;
    if (S == '+')
    {
        cout << A + B << endl;
    }
    else if (S == '-')
    {
        cout << A - B << endl;
    }
    else if (S == '*')
    {
        cout << A * B << endl;
    }
    else if (S == '/')
    {
        cout << A / B << endl;
    }
}
