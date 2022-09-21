#include <iostream>
using namespace std;

class check
{
    int a;

public:
    check()
    {
        cout << " ******* This Program Is going to check Whether The number is Even Or Odd***" << endl;
    }

    void display()

    {
        cout << "Enter the Number :";
        cin >> a;
        if (a > 0 & a / 2)
        {
            cout << "Enter Number is Even Number" << endl;
        }
        else
        {
            cout << "Enters Number is Odd Number" << endl;
        }
    }
};

int main()
{
    check c;

    c.display();
    return 0;
}