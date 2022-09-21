#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int num, rem, i = 0, b = 0, temp;
    cout << "Enter Number :";
    cin >> num;

    temp = num;
    while (temp > 0)
    {
        rem = temp % 10;
        b = b + rem * pow(2 , i);
        i++;
        temp=temp/10;
    }
    cout<<"Decimal number :"<<b<<endl;
    return 0;
}