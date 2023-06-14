#include<iostream>
using namespace std;

int main(){

    int i=4;
    int j=5;
    int temp;

    if (i<j){
        temp=i;
        i=j;
        j=temp;

        cout<<"value becomes "<<i<<endl;
        cout<<"value becomes "<<j<<endl;
    }

    else{
        cout<<"value remain"<<i<<endl;
        cout<<"value remain"<<j<<endl;
    }
    return 0;
}
