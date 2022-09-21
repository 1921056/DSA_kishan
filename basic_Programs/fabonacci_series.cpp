#include <iostream>
using namespace std;

int main(){
    int first=0,second=1,n,next;
    cout<<"enter the number :";
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        cout<<first <<" ";
        next=first+second;
        first=second;
        second=next;
    }

    return 0;
}