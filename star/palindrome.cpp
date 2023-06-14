# include<iostream>
using namespace std;

int main()
{
    int num=1441,digit;
    int sum=0,rev=0;
    
  
    for (int i=0;i<4;i++){
    digit =num%10;
    num=num/10;
    sum=sum+digit;
    rev=(rev*10)+digit;
}
    if (num=rev)
    {
        cout<<"Entered Number is Palindrome Number"<<endl;
    }
    else{
        cout<<"number is not palindrome in nature"<<endl;
    }
    cout<<"Reverse of a Number is :"<<rev<<endl;

    cout<<"Digit :"<<digit<<endl;
    cout<<"Number :"<<num<<endl;
    cout<<"Sum :"<<sum<<endl<<endl;

        return 0;
}