#include "abstr_emp.h"

char abstr_emp::getType() const
{
    return type;
}

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

void abstr_emp::GetAll(istream &  fin)
{
    getline(fin, fname);
    getline(fin, lname);
    getline(fin, job);
}

void abstr_emp::WriteAll(ostream & fout) const
{
    fout << fname << endl;
    fout << lname << endl;
    fout << job << endl;
}

void abstr_emp::SetType(int t)
{
    type = t;
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
    abstr_emp::SetType(abstr_emp::Employee);
}

employee::employee(const std::__cxx11::string &fn,
                   const std::__cxx11::string &ln,
                   const std::__cxx11::string &j)
    :abstr_emp(fn, ln, j)
{
    abstr_emp::SetType(abstr_emp::Employee);
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

void employee::GetAll(istream &  fin)
{
    abstr_emp::GetAll(fin);
}

void employee::WriteAll(ostream &  fout) const
{
    fout << (char)abstr_emp::getType() << endl;
    abstr_emp::WriteAll(fout);
}

void manager::setInchargeof(int value)
{
    inchargeof = value;
}

manager::manager()
{
    abstr_emp::SetType(abstr_emp::Manager);
}

manager::manager(const std::__cxx11::string &fn,
                 const std::__cxx11::string &ln,
                 const std::__cxx11::string &j,
                 int ico)
    :abstr_emp(fn, ln, j), inchargeof(ico)
{
    abstr_emp::SetType(abstr_emp::Manager);
}

manager::manager(const abstr_emp &e, int ico)
    :abstr_emp(e), inchargeof(ico)
{
    abstr_emp::SetType(abstr_emp::Manager);
}

manager::manager(const manager &m)
    :manager(m, m.inchargeof)
{
    abstr_emp::SetType(abstr_emp::Manager);
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

void manager::GetAll(istream &  fin)
{
    abstr_emp::GetAll(fin);
    fin >> inchargeof;
    fin.get();
}

void manager::WriteAll(ostream &  fout) const
{
    fout << (char)abstr_emp::getType()  << endl;
    abstr_emp::WriteAll(fout);
    fout << inchargeof << endl;
}

fink::fink()
{
    abstr_emp::SetType(abstr_emp::Fink);
}

fink::fink(const std::__cxx11::string &fn,
           const std::__cxx11::string &ln,
           const std::__cxx11::string &j,
           const std::__cxx11::string &rpo)
    :abstr_emp(fn, ln, j), reportsto(rpo)
{
    abstr_emp::SetType(abstr_emp::Fink);
}

fink::fink(const abstr_emp &e, const std::__cxx11::string &rpo)
    :abstr_emp(e), reportsto(rpo)
{
    abstr_emp::SetType(abstr_emp::Fink);
}

fink::fink(const fink &e)
    :fink(e, e.reportsto)
{
    abstr_emp::SetType(abstr_emp::Fink);
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

void fink::GetAll(istream &  fin)
{
    abstr_emp::GetAll(fin);
    fin >> reportsto;
    fin.get();
}

void fink::WriteAll(ostream &  fout) const
{
    fout << (char)abstr_emp::getType()  << endl;
    abstr_emp::WriteAll(fout);
    fout << reportsto << endl;
}


highfink::highfink()
{
    abstr_emp::SetType(abstr_emp::Highfink);
}

highfink::highfink(const std::__cxx11::string &fn,
                   const std::__cxx11::string &ln,
                   const std::__cxx11::string &j,
                   const std::__cxx11::string &rpo,
                   int ico)
    : manager(fn, ln, j, ico), fink(fn, ln, j, rpo)
{
    abstr_emp::SetType(abstr_emp::Highfink);
}

highfink::highfink(const abstr_emp &e, const std::__cxx11::string &rpo, int ico)
    :manager(e, ico), fink(e, rpo)
{
    abstr_emp::SetType(abstr_emp::Highfink);
}

highfink::highfink(const fink &f, int ico)
    :fink(f), manager(f, ico)
{
    abstr_emp::SetType(abstr_emp::Highfink);
}

highfink::highfink(const manager &m, const string &rpo)
    :abstr_emp((const abstr_emp &)m), manager(m), fink((const abstr_emp &)m, rpo)
{
    abstr_emp::SetType(abstr_emp::Highfink);
}

highfink::highfink(const highfink &h)
    :fink(h), manager(h)
{
    abstr_emp::SetType(abstr_emp::Highfink);
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
    cout << "Input the in charger of: ";
    int iof;
    cin >> iof;
    manager::setInchargeof(iof);
}

void highfink::GetAll(istream &  fin)
{
    fink::GetAll(fin);
    int iof;
    fin >> iof;
    manager::setInchargeof(iof);
    fin.get();
}

void highfink::WriteAll(ostream &  fout) const
{
    fout << (char)abstr_emp::getType()  << endl;
    abstr_emp::WriteAll(fout);
    fout << ReportsTo() << endl;
    fout << InChargeOf() << endl;
}
