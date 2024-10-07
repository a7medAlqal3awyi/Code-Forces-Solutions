#include <iostream>
using namespace std;

int main()
{
    double X;
    cin >> X;
    int int_part=(int)X;
    double double_part=X-int_part;
    if (X == (int)X )
    {
        cout << "int " << X << endl;
    }
    else
    {
        cout << "float " << int_part << " " << double_part << endl;
    }
    return 0;
}
