/*
Given four numBers A, B, C and D. Print the result of the following equation :

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

int main() {
    long long A, B, C, D;
    cin >> A >> B >> C >> D;

    long long result = (A * B) - (C * D);

    cout << "Difference = " << result << endl;

    return 0;
}
