//Base class pointer can point to the object of its descendant class
//But its converse is not true 
// virtual function comes into existence when we have to do over riding and calling funtion not with 
// object but with their parent class pointer which stores the address of B class object 
//Abstract Class: A class containing pure virtual function is an abstract class 
// We cannot make object of abstract class if we want to acess their another function we can acess by 
// their child class.
// virtual void v1() { .. }=0; // pure virtual function 
// A do nothing function is pure virtual function 

#include <iostream>
using namespace std;
    class A{
        public:
        virtual void f1(){ } // By putting virtual before function compiler will get to know 
                            // that do late binding of f1() function 
    };

    class b:public A{
        public :
        void f1(){ }// Function overriding 
        void f2(){ }
    };

int main(){
    A o1,*p;
    b o2;
    p=&o1; // p points to the address of A class object 
    p=&o2; // p can also points to the address of B class object which is the descendant class of 
            // Base class which is A class

    o2.f1(); // B class f1() will run because at compile time compiler will see Object type which is 
                // of B type 
    p->f1(); // A class f1() will run beacause at compile time compiler will see pointer type 
                // which is of A type 

    return 0;
}