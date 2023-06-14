//How you will be able to store values in a one go ?
//You can do this in four ways :1. Structure  2.Arrays  3. Classes 4. Union

//To access the values stored in these variables, you can use dot (.) 
// operator or arrow (->) operator depending on whether you are accessing the values 
// through an instance of a class or a pointer to an instance of a class.

//cout << john.name << endl; // Output: John
// cout << john.age << endl; // Output: 25
// cout << john.height << endl; // Output: 1.75

// Person* ptr = &john;
// cout << ptr->name << endl; // Output: John
// cout << ptr->age << endl; // Output: 25
// cout << ptr->height << endl; // Output: 1.75

# include<iostream>
using namespace std;
    struct Person{
        string name;
        int age;
        double height;
    };

int main()
{
    Person kishan;
    kishan.name="Kishan";
    kishan.age=21;
    kishan.height=185;

    Person himanshu;
    himanshu.name="Himanshu";
    himanshu.age=20;
    himanshu.height=155;

    // cout<<"The name of the Student is "<<kishan.name<<endl;
    // cout<<"The age of he student is "<<kishan.age<<endl;
    // cout<<"The height of the student is "<<kishan.height<<endl<<endl;

    // cout<<"The name of the Student is "<<himanshu.name<<endl;
    // cout<<"The age of he student is "<<himanshu.age<<endl;
    // cout<<"The height of the student is "<<himanshu.height<<endl;


    //storing objects in a array so that we can access all the elements in a one go     
    Person myarr[]={kishan,himanshu};

    for(int i =0;i<2;i++)
    {
        cout<<"The name of the Student is "<<myarr[i].name<<endl;
        cout<<"The age of he student is "<<myarr[i].age<<endl;
        cout<<"The height of the student is "<<myarr[i].height<<endl<<endl;
    }
}