#include <iostream>
using namespace std;

class add
{

public:
    int x, y;
    // Default Constructor called Automatically when object Created 
    add()
    {
        cout << " ~~~~~~ Hello! I am Going to Add Two Numbers ``````````" << endl;
       
    }
    //Parametralised Construtor
    add(int a ,int b){
        x=a;
        y=b;
        
    }

    void display()
    {
     cout<< "Additon of a and b :"<<x+y<<endl;
    }
};

int main()
{

    add addition;
    add addition1(5,5);
    
    addition1.display();

    return 0;
}