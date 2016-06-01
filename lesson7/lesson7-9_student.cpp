#include <iostream>

using namespace std;
const int SLEN = 30;

struct student
{
    char fullname[SLEN];
    char hobby[SLEN];
    int ooplevel;
};

int getinfo(student pa[], int n);
void display1(student st);
void display2(const student * ps);
void display3(const student pa[], int n);

int main(int argc, char const *argv[])
{
    cout << "Enter class size: ";
    int class_size;
    cin >> class_size;
    while(cin.get() != '\n')
        continue;

    student * ptr_stu = new student[class_size];
    int entered = getinfo(ptr_stu, class_size);
    for(int i = 0; i < entered; i++)
    {
        display1(ptr_stu[i]);
        display2(&ptr_stu[i]);
    }
    display3(ptr_stu, entered);
    delete[] ptr_stu;
    cout << "Done\n";
    return 0;
}

int getinfo(student pa[], int n)
{
    int count ;
    for(count  = 0; count < n; count++)
    {
        cout << "Input the #" << count << " fullname: " ;
        if(!cin.get(pa[count].fullname, SLEN))
            break;
        cout << "Input the #" << count << " hobby: " ;
        cin >> pa[count].hobby;
        cout << "Input the #" << count << " ooplevel: " ;
        cin >> pa[count].ooplevel;
        cin.get();
    }
    return count;
}
void display1(student st)
{
    cout << "Display1: Name: " << st.fullname << "  Hobby: " << st.hobby << "  ooplevel: " 
            << st.ooplevel << endl << endl;
}
void display2(const student * ps)
{
    cout << "Display2: Name: " << ps->fullname << "  Hobby: " << ps->hobby << "  ooplevel: " 
            << ps->ooplevel << endl << endl;
}
void display3(const student pa[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << "Display3: Name: " << pa[i].fullname << "  Hobby: " << pa[i].hobby << "  ooplevel: " 
                << pa[i].ooplevel << endl << endl;
    }
}
