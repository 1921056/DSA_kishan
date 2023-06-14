//Polymorphism :
// It is of two types :
//Complile Time Polymorphism:Function Overloading,Operator Overloading 
//Run Time polymorphism :Virtual Function


//Operator Overloading :In C++, it can add special features to the 
// functionality and behaviour of already existing operators like 
// athematic and other operations. The mechanism of giving special 
// meaning to an operator is known as operator overloading. 
// For example, we can overload an operator ‘+’ in a class-like string 
// to concatenate two strings by just using +. 

// When the operator is overloaded with multiple jobs, it is known as operator overloading.

#include<iostream>
 using namespace std;
    class complex{
        int a,b;
        public:
        void set_data(int x,int y){
            a=x;
            b=y;
        }
        void get_data(){
            cout<<"a :"<<a<<" b :"<<b<<endl;
        }
        // complex add(complex c) 
        // for using + operator as function name we have to use 
         // opertor keyword with it. we only use that operator as a name 
        //  which is predefined in c language .
            complex operator+(complex c)                         
        {
            complex temp;
            temp.a=a+c.a;
            temp.b=b+c.b;
            return temp;
        }

    };
 int main()
 {
    complex c1,c2,c3;
    c1.set_data(3,4);
    c2.set_data(5,6);
    // c3=c1.add(c2);
    // c3=c1.operator+(c2); we can also write this 
    c3=c1+c2;// Or we can also write this 
            // so by using that we use + operator to add non premitive datatype.

    c3.get_data();
    return 0;
 }