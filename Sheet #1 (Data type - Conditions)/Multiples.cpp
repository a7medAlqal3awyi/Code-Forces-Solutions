/*
*
* Given two numbers A and B. Print "Multiples" if A is multiple of B or vice versa. Otherwise print "No Multiples".

Input
Only one line containing two numbers A, B (1  ≤  A, B  ≤  106)

Output
Print the "Multiples" or "No Multiples" corresponding to the read numbers.

Examples
InputCopy
9 3
OutputCopy
Multiples
InputCopy
6 24
OutputCopy
Multiples
InputCopy
12 5
OutputCopy
No Multiples
*/
#include <iostream>
using namespace std;

int main()
{
    int A, B;
    cin >> A >> B;
    if (A % B==0 || B%A==0)
    {
        cout << "Multiples" << endl;
    }
    else
        cout << "No Multiples" << endl;

    return 0;
}
