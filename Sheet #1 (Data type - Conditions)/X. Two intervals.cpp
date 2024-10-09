#include <iostream>
using namespace std;

int main()
{
    int l1, r1, l2, r2;
    cin >> l1 >> r1 >> l2 >> r2;

    if (r1 >= l2 && r2 >= l1)
    {
        int start, end;
        if (l1 > l2)
        {
            start = l1;
        }
        else
        {
            start = l2;
        }
        if (r1 > r2)
        {
            end = r2;
        }
        else
        {
            end = r1;
        }

        cout << start << " " << end << endl;
    }

    else
        cout << "-1" << endl;
}
