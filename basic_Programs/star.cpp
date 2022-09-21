#include<iostream>
using namespace std;

int main(){
    int rows , i,j;
    cout<<"Enter The Number of Rows :";
    cin>>rows;

    for (i = rows; i >= 0; i--)
    {
        for (j = 0; j <= i; j++)
        {
            cout<<j;
        }
        cout<<endl;
        
    }
    
    return 0;
}