#include<iostream>
using namespace std;
    class box{
        int l,b,h;
        public:
        void set_dimension(int x,int y,int z){
            l=x;
            b=y;
            h=z;
        }

        void get_dimension(){
            cout<<"length :"<<l<<endl;
            cout<<"breadth :"<<b<<endl;
            cout<<"height :"<<h<<endl;
        }
    };
int main()
{
    box b1,*p;//Make object and pointer of class
    p =&b1; // In pointer we store the address of class
    p->set_dimension(12,15,16);// with pointer access variables of class 
    p->get_dimension();

    // ************this keyword************
    // -- this is a local object pointer in every instance member function 
    // containing address of the caller object.
    // -- This pointer cannot be modified.
    // --It is used to refer caller object in member function.


    // b1.set_dimension(1,2,3);
    // b1.get_dimension();
    return 0;
}