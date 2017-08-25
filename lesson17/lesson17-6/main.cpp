#include <iostream>
#include <fstream>
#include "abstr_emp.h"

using namespace std;
typedef abstr_emp* ABS_EMP_PTR;
const int MAX_EMPLOYEE = 10;
int getExistEmployees(abstr_emp **ptr);
void createNewEmployee(ABS_EMP_PTR & ptr, char ch);


int main()
{
    ABS_EMP_PTR ptr_employee[MAX_EMPLOYEE];

    int count = getExistEmployees(ptr_employee);

    for (int i = 0; i < count; i++)
    {
        ptr_employee[i]->ShowAll();
    }

    cout << "Input your Data: \n";
    for (; count < MAX_EMPLOYEE; count++)
    {
        cout << "Select the employee type: \n"
             << "         e for Employee \n"
             << "         m for Manager \n"
             << "         f for Fink \n"
             << "         h for Highfink \n"
             << "(q to quit)" << endl;
        char ch;
        cin >> ch;
        cin.get();
        if (ch == 'q')
            break;
        createNewEmployee(ptr_employee[count], ch);
    }

    ofstream fout;
    fout.open("employeeList.txt");
    if(!fout.is_open())
    {
        cerr << "File Open Error" << endl;
        exit(EXIT_FAILURE);
    }

    cout << "Here's your updated list: " << endl;
    for(int i = 0; i < count; i++)
    {
        ptr_employee[i]->ShowAll();
        cout << endl;
        ptr_employee[i]->WriteAll(fout);
    }

    fout.close();
    return 0;
}

int getExistEmployees(abstr_emp **pc)
{
    int count = 0;
    char ch;
    ifstream fin;
    fin.open("employeeList.txt");
    if (fin.is_open())
    {
        char classtype;
        while((fin.get(classtype)).get(ch))
        {
            switch(classtype)
            {
                case abstr_emp::Employee:
                    pc[count] = new employee();
                    pc[count++]->GetAll(fin);
                    break;
                case abstr_emp::Manager:
                    pc[count] = new manager();
                    pc[count++]->GetAll(fin);
                    break;
                case abstr_emp::Fink:
                    pc[count] = new fink();
                    pc[count++]->GetAll(fin);
                    break;
                case abstr_emp::Highfink:
                    pc[count] = new highfink();
                    pc[count++]->GetAll(fin);
                    break;
                default:
                    cerr << "Something Error" << endl;
                    break;
            }
        }
        fin.close();
    }
    return count;
}

void createNewEmployee(ABS_EMP_PTR &ptr, char ch)
{
    switch (ch)
    {
        case abstr_emp::Employee:
            ptr = new employee();
            ptr->SetAll();
            break;
        case abstr_emp::Manager:
            ptr = new manager();
            ptr->SetAll();
            break;
        case abstr_emp::Fink:
            ptr = new fink();
            ptr->SetAll();
            break;
        case abstr_emp::Highfink:
            ptr = new highfink();
            ptr->SetAll();
            break;
        default:
            cout << "Type Input Error!" << endl;
            break;
    }
}
