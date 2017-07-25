#include "abstr_emp.h"

abstr_emp::abstr_emp()
{

}



abstr_emp::abstr_emp(const std::__cxx11::string &fn,
                     const std::__cxx11::string &ln,
                     const std::__cxx11::string &j)
    : fname(fn), lname(ln), job(j)
{

}
abstr_emp::abstr_emp(const abstr_emp &e)
    :fname(e.fname), lname(e.lname), job(e.job)
{

}

void abstr_emp::ShowAll() const
{
    cout << "Name: " << fname << "." << lname << "  Job: " << job << endl;
}

void abstr_emp::SetAll()
{
    cout << "Input the First Name:";
    cin >> fname;
    cout << "Input the Last Name: ";
    cin >> lname;
    cout << "Input the Job: ";
    cin >> job;
}

std::ostream &operator<<(std::ostream &os, const abstr_emp &e)
{
    os << "NAME:" << e.fname << "." << e.lname << ", JOB: " << e.job << endl;
    return os;
}

abstr_emp::~abstr_emp()
{

}

employee::employee()
{

}

employee::employee(const std::__cxx11::string &fn,
                   const std::__cxx11::string &ln,
                   const std::__cxx11::string &j)
    :abstr_emp(fn, ln, j)
{

}

void employee::ShowAll() const
{
    cout << "This is a employee: ";
    abstr_emp::ShowAll();
}

void employee::SetAll()
{
    abstr_emp::SetAll();
}

manager::manager()
{

}

manager::manager(const std::__cxx11::string &fn,
                 const std::__cxx11::string &ln,
                 const std::__cxx11::string &j,
                 int ico)
    :abstr_emp(fn, ln, j), inchargeof(ico)
{

}

manager::manager(const abstr_emp &e, int ico)
    :abstr_emp(e), inchargeof(ico)
{

}

manager::manager(const manager &m)
    :manager(m, m.inchargeof)
{

}

void manager::ShowAll() const
{
    cout << "This is a manager: ";
    abstr_emp::ShowAll();
    cout << "There is " << inchargeof << " in charger\n";
}

void manager::SetAll()
{
    abstr_emp::SetAll();
    cout << "Input the in charger of: ";
    cin >> inchargeof;
}

fink::fink()
{

}

fink::fink(const std::__cxx11::string &fn,
           const std::__cxx11::string &ln,
           const std::__cxx11::string &j,
           const std::__cxx11::string &rpo)
    :abstr_emp(fn, ln, j), reportsto(rpo)
{

}

fink::fink(const abstr_emp &e, const std::__cxx11::string &rpo)
    :abstr_emp(e), reportsto(rpo)
{

}

fink::fink(const fink &e)
    :fink(e, e.reportsto)
{

}

void fink::ShowAll() const
{
    cout << "This is a fink: ";
    abstr_emp::ShowAll();
    cout << "There is " << reportsto << " in reportsto\n";
}

void fink::SetAll()
{
    abstr_emp::SetAll();
    cout << "Input the in reportsto of: ";
    cin >> reportsto;

}


highfink::highfink()
{

}

highfink::highfink(const std::__cxx11::string &fn,
                   const std::__cxx11::string &ln,
                   const std::__cxx11::string &j,
                   const std::__cxx11::string &rpo,
                   int ico)
    : manager(fn, ln, j, ico), fink(fn, ln, j, rpo)
{

}

highfink::highfink(const abstr_emp &e, const std::__cxx11::string &rpo, int ico)
    :manager(e, ico), fink(e, rpo)
{

}

highfink::highfink(const fink &f, int ico)
    :fink(f), manager(f, ico)
{

}

highfink::highfink(const manager &m, const string &rpo)
    :abstr_emp((const abstr_emp &)m), manager(m), fink((const abstr_emp &)m, rpo)
{

}

highfink::highfink(const highfink &h)
    :fink(h), manager(h)
{

}

void highfink::ShowAll() const
{
    cout << "This is a highfink: ";
    abstr_emp::ShowAll();
    cout << "There is " << ReportsTo() << " in reportsto\n";
    cout << "There is " << InChargeOf() << " in charger\n";
}

void highfink::SetAll()
{
    fink::SetAll();
    manager::SetAll();
}
