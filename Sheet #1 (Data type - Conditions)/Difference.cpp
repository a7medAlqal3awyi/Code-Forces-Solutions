/*
Given four numbers A, B, C and D. Print the result of the following equation :

 X = (A * B) - (C * D).

Input
Only one line containing 4 separated numbers A, B, C and D ( - 105  ≤  A, B, C, D  ≤  105).

Output
Print "Difference  =  " without quotes followed by the equation result.

Examples
InputCopy
1 2 3 4
OutputCopy
Difference = -10
InputCopy
2 3 4 5
OutputCopy
Difference = -14

 */

#include <iostream>
using namespace std;

int main()
{
    int n1, n2, n3, n4;
    cin >> n1 >> n2 >> n3 >> n4;
    int res = (n1 * n2) - (n3 * n4);
    cout << "Difference =  " << res<<endl;
    return 0;
}
