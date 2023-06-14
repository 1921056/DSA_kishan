#include <iostream>
using namespace std;

int main()
{
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;

    for(int i = 5; i >= 1; i--)
   {
    for(int j =rows;j>=(rows-(i-1));j--){
    cout<<j<<" ";
   }
    cout<<endl;
   }
}
   