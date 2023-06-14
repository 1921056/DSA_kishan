#include<iostream>
using namespace std;
int main(){
    int temp;


// cout<< "Array is ";
//     for (int j =0;j<=4;j++){
//         cout<< arr[j]<<" ";
//     }
    

    // for(int i =0;i<=4;i++){
    //     cout<< arr[i]<<" ";
    // }
    // cout<<endl;
    int arr[5]={2,1,6,5,4};
    for (int i =0;i<=1;i++){
    for (int j =0;j<=4;j++){
        if (arr[j]>arr[j+1]){
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
            

        }
        else {
            cout<<" ";
        }
        cout<<arr[j]<<" ";
    }
    cout<<endl;
    }
    


    return 0;
}