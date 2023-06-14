# include<iostream>
using namespace std;

int main(){
    cout<<"Enter Elements :"<<endl;
    int num,n;
    int arr[5];
    for (int i =0;i<5;i++)
    {
        cin>>arr[i];
    }

    cout<<"Elements are :";

    for (int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Enter the Element to find :";
    cin>>n;
    cout<<endl;

    for (int i=0;i<5;i++)
    {
        if (arr[i]==n)
        {
            cout<<"The element is at Index :"<<i+1<<endl;
        }
        
    }
}