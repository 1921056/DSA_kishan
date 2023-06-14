// In C++ , pass by value and pass by refernce are the two ways of 
// passing arguments to functions.
//Below example is of type Pass By value
#include<iostream>
using namespace std;

//     void increment(int x)
//     {
//         x+1;   // It give output as 5 because you paasing the copy of 
//                 // actual value to function arguments function done their work properly it increment the 
//                 // value by 1 but can't able to return that value to the user. for getting value 
//                 // give return type and that returning value store into new variable into name function 
//     }            // see below example

// int main()
// {
//     int num=5;
//     increment(num);
//     cout<<num<<endl;
//     return 0;
// }

    int increment(int x)
    {
        return x+1;
    }

int main(){
    int num =4,new_value;
    new_value=increment(num);
    cout<<"value was :"<<num<<endl;
    cout<<"value become :"<<new_value<<endl;
    return 0;
}
