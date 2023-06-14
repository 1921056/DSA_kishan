#include<iostream>
using namespace std;
 int main(){

    int a[]={5,3,6,7,8};
    int i,n;

    cout<<"Enter the elelment to find :";
    cin>>n;
    for (i = 0; i < 5; i++)
    {
        if(a[i]==n)
        {
            cout<< "element is present in the array at a["<<i<<"]"<<endl;
            continue;
        }
        else{
            cout<<"not able to found"<<endl;
        }

    }
    
    
    cout<<endl;

    
 }