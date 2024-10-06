#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int years = N / 365;
    int monthAndDays = N % 365;
    int month = monthAndDays / 30;
    int day = monthAndDays % 30;

    cout << years << " years" << endl;
    cout << month << " months" << endl;
    cout << day << " days" << endl;
}
