/*
Given a letter X. Determine whether X is Digit or Alphabet and if it is Alphabet determine if it is Capital Case or Small Case.

Note:

Digits in ASCII '0' = 48,'1' = 49 ....etc
Capital letters in ASCII 'A' = 65, 'B' = 66 ....etc
Small letters in ASCII 'a' = 97,'b' = 98 ....etc
Input
Only one line containing a character X which will be a capital or small letter or digit.

Output
Print a single line contains "IS DIGIT" if X is digit otherwise, print "ALPHA" in the first line followed by a new line that contains "IS CAPITAL" if X is a capital letter and "IS SMALL" if X is a small letter.

Examples
InputCopy
A
OutputCopy
ALPHA
IS CAPITAL
InputCopy
9
OutputCopy
IS DIGIT
InputCopy
a
OutputCopy
ALPHA
IS SMALL

 */
#include  <iostream>
using namespace std;

int main()
{
    char X;
    cin >> X;
    int charValue = int(X);

    if (charValue >= 48 && charValue <= 57)
    {
        cout << "IS DIGIT" << endl;
    }
    else if(charValue>=65&&charValue<=90)
    {
        cout << "ALPHA" << endl;
        cout << "IS CAPITAL" << endl;

    }
    else if(charValue>=97&&charValue<=122)
    {
        cout << "ALPHA" << endl;
        cout << "IS SMALL" << endl;
    }
    return 0;
}
