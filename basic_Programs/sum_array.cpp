#include <iostream>
using namespace std;

int main()
{
    int i,sum=0;
    int arr[7] = {5, 10, 15, 20, 25, 30, 35};
    for ( i = 0; i < 7; i++)
    {
        cout<<arr[i]<<" " ;
        sum=sum+arr[i];
    }
    cout<<endl;
    cout<<sum<<endl;

    return 0;
}