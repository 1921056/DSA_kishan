#include <iostream>
using namespace std;

int main(){
    int b=0,num,base=1,rem;
    cout<<"Enter Number :";
    cin>>num;
    while(num>0){

        rem=num%2;
        b=(base*rem)+b;
        num=num/2;
        base=base*10;

    }

    cout<<"Binary number :"<<b<<endl;
    return 0;
}       