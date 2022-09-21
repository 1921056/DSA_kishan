#include<iostream>
using namespace std;
 class table
 {
    int a;
    public:
    table(){
        cout<<"******* THis ProGram Give you The Table of Any Number *******"<<endl;
    }

    void display()
    
    {
        cout<< "Enter The Table No :";
        cin>>a;
        for (int i = 0; i < 11; i++)
        {
            cout<<a <<" * "<<i<<" = "<< a*i<<endl;
        }
        
    }
 };

    


int main()
{
    table t;

    t.display();
    return 0;
}