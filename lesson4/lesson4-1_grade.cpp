#include <iostream>
using namespace std;

struct  stu_info
{
    string first_name;
    string last_name;
    char grade;
    int age;
};

int main()
{
    using namespace std;
    stu_info stu_temp;

    cout<<"What is your first_name?";
    getline(cin, stu_temp.first_name);

    cout<<"What is your last_name?";
    getline(cin, stu_temp.last_name);
 
    cout<<"What letter grade do your deserge?";
    cin>>stu_temp.grade;

    // cin.get();
    cout<<"What is your age?";
    cin>>stu_temp.age;

    cout<<"Name: "<<stu_temp.last_name<<", "<<stu_temp.first_name<<endl;
    cout<<"Grade: "<<(char)(stu_temp.grade + 1)<<endl;
    cout<<"Age: "<<stu_temp.age<<endl;
}
