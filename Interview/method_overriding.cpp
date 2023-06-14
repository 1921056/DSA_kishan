//Function Overloading : Function with same name but with different parameters and 
                    //should be present in the same scope or same class to achieve overoading.
//Function Overriding : The concept of Early binding is here -- take scenario that two class with 
                // same function with same parameter and achieving inheritance first class is a parent 
                // of second class. If we make object of second class and call that function than which function 
                // will be called it is from parent class or child class ... The function from child class 
                // will be called hence achieves Overriding .
//Function Hiding : Means Function with same name but with different parameters present in different 
                // classes then only child class function will be called to achieve over riding to 
                // do early binding 

#include<iostream>
using namespace std;
    class Car{
        void f1()//ShiftGear()  Old Functionality of gear
        {
            // Code
        }

        void f2(){   } // code 
    };

    class SportsCar: public Car{
        void f1() // Shiftgear New functionality of gear 
        {
            //Code   // Run this function to achieve Overriding and early binding 
        }
        void f2( int x ){  }// code Achieves Method Hiding .. Compiler will not go to parent 
                                // as name of the function matches 
    };
int main(){
    SportsCar obj ;
    obj.f1(); // SportsCar f1() will run 
    obj.f2();// Error 
    obj.f2(40);// SportsCar f2() will run 

}