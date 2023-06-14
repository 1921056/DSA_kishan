#include <iostream>
using namespace std;

class swapping
{
    int a, b;

public:
    swapping()
    {
        cout << "Enter the values of a and b for swapping :"<<endl;
        
    }

    void display()
    {   int temp;
        cin >> a >> b;
        cout<<"a :"<<a<<endl<<"b :"<<b<<endl<<endl;

        temp=a;
        a=b;
        b=temp;
        cout<<"********* After Swapping********"<<endl;
        cout<<"a :"<<a<<endl<<"b :"<<b<<endl;
    }
};

int main()
{

    swapping s;
    s.display();
    return 0;
}