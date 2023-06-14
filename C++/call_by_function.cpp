#include<iostream>
using namespace std;

int main(){
    int a[5] ={};
    int n,count=0;
    for(int j =0;j<=5;j++)
    cin>>a[j];
    
    for (int j=0;j<=5;j++)
    cout<<"values are "<<a[j]<<endl;

    cout<<"Enter the elemen to find out ";
    cin>>n;
    for (int j =0;j<=5;j++)
    {
    {(a[j]==n);    
    count++ ;}
    }
    cout<<"value find at position "<<count;


    return 0;
}
