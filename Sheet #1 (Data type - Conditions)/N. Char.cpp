//
// Created by Ahmed AlQalawyi on 10/3/2024.
//
#include  <iostream>
using namespace std;

int main()
{
    char X;
    cin >> X;
    int charValue = int(X);
    if (charValue >= 65 && charValue <= 90)
    {
        charValue += 32;
        cout << char(charValue) << endl;
    }
    else if (charValue >= 97 && charValue <= 122)
    {
        charValue -= 32;
        cout << char(charValue) << endl;
    }
    return 0;
}
