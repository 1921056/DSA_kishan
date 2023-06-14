#include <iostream>
using namespace std;

int main(){
    cout<<"Enter the number of elements to be stored in an array :";
    int i, a[5],count=1;
    for ( i = 0; i <= 4; i++)
    {
        cin>>a[i];
    }

    for ( i = 0; i <= 4; i++){
    {
        cout<<"Printing the "<<i<<" element of array is :" <<a[i];
        cout<<endl;
        (count++)-1;
    }
    
    }
    cout<<"no of elements present in an array :"<<count-1;



    
    
}