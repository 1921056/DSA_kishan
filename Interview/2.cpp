# include<iostream>
using namespace std;

    class student{
        string name;
        double roll_no;
        string type;

    public:
    // Constructor
    student(string name, double roll_no, string typ) {
        this->name = name;
        this->roll_no = roll_no;
        this->type = typ;
    }

    int get_data(){
        cout<<"Name :"<<name<<endl;
        cout<<"Roll_no :"<<roll_no<<endl;
        cout<<"Type :"<<type<<endl<<endl;
    }


    };

int main()
{
    // Assigning values to each element of the array
    student myarr[2]={student("kishan",1,"S"), student("himanshu",2,"S")};

    // myarr[0].name="kishan";
    // myarr[0].roll_no=1;
    // myarr[0].type="S";

    // myarr[1].name="himanshu";
    // myarr[1].roll_no=2;
    // myarr[1].type="S";

    for(int i =0;i<2;i++)
    {
    //     cout<<"Name :"<<myarr[i].name<<endl;
    //     cout<<"Roll_no :"<<myarr[i].roll_no<<endl;
    //     cout<<"Type :"<<myarr[i].type<<endl<<endl;

    cout<<myarr[i].get_data()<<endl;
    }
    return 0;
}