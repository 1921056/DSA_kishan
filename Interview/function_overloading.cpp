//Polymorphism :
// It is of two types :
//Complile Time Polymorphism:Function Overloading,Operator Overloading 
//Run Time polymorphism :Virtual Function

//--Function Overloading : Same Name With Different Arguments in Function .

# include<iostream>
using namespace std;

    int add(int a,int b)
    {
        return a+b;
    }

    int add(int a,int b,int c)
    {
        return a+b+c;
    }

    double add(double a, double b)
    {
        return a+b;
    }

int main()
{
    int sum;
    sum=add(4,2);
    sum=add(4,2,2);
    sum=add(6.5,6.5,7.5);
    cout<<sum <<endl;
    return 0;
}