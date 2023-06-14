// In c++, we have two ways to paas the value to function i.e pass by value and pass by reference
#include<iostream>
using namespace std;
    void increment(int &x)// Pass by refence we are refering to the address of variable 
    {
        x++;
    }

int main()
{
    int num=5;
    cout<<"Value was :"<<num<<endl;
    increment(num);
    cout<<"Value become :"<<num;
    return 0;
}