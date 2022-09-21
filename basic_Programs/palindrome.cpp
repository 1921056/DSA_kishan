#include <typeinfo>
#include <iostream>
using namespace std;

int main()
{
    int num, digit, reverse = 0, n;
    cout << "Enter Number :";
    cin >> num;
    n = num;
    while (num != 0)
    {
        digit = num % 10;
        reverse = (reverse * 10) + digit;
        num = num / 10;
    }

    cout << reverse<<endl;

    if (n == reverse)
    {
        cout << "Number is palindromic" << endl;
    }
    else
    {
        cout << "Number is not palindromic" << endl;
    }

    return 0;
}