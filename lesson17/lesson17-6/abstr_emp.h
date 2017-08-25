#ifndef ABSTR_EMP_H
#define ABSTR_EMP_H

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class abstr_emp
{
private:
    std::string fname;
    std::string lname;
    std::string job;
    char type;
public:
    enum
    {
        Employee = 'e',
        Manager = 'm',
        Fink = 'f',
        Highfink = 'h'
    };
    abstr_emp();
    abstr_emp(const std::string &fn, const std::string &ln,
              const std::string &j);
    abstr_emp(const abstr_emp &e);
    virtual void ShowAll() const;
    virtual void SetAll();
    virtual void GetAll(istream &  fin);
    virtual void WriteAll(ostream  & fout) const;
    void SetType(int t);
    friend std::ostream &
    operator<<(std::ostream &os, const abstr_emp &e);
    virtual ~abstr_emp() = 0;
    char getType() const;
};

class employee : public abstr_emp
{
public:
    employee();
    employee(const std::string &fn, const std::string &ln,
             const std::string &j);
    ~employee() {}
    virtual void ShowAll() const;
    virtual void SetAll();
    virtual void GetAll(istream  & fin);
    virtual void WriteAll(ostream  & fout) const;
};

class manager : virtual public abstr_emp
{
private:
    int inchargeof;
protected:
    int InChargeOf() const { return inchargeof; }
    int &InChargOf() { return inchargeof; }
public:
    manager();
    manager(const std::string &fn, const std::string &ln,
            const std::string &j, int ico = 0);
    manager(const abstr_emp &e, int ico);
    manager(const manager &m);
    ~manager() {}
    virtual void ShowAll() const;
    virtual void SetAll();
    virtual void GetAll(istream  & fin);
    virtual void WriteAll(ostream  & fout) const;
    void setInchargeof(int value);
};

class fink : virtual public abstr_emp
{
private:
    std::string reportsto;
protected:
    const std::string ReportsTo() const { return reportsto; }
    std::string &ReportsTo() { return reportsto; }
public:
    fink();
    fink(const std::string &fn, const std::string &ln,
         const std::string &j, const std::string &rpo);
    fink(const abstr_emp &e, const std::string &rpo);
    fink(const fink &e);
    ~fink() {}
    virtual void ShowAll() const;
    virtual void SetAll();
    virtual void GetAll(istream  & fin);
    virtual void WriteAll(ostream  & fout) const;
};

class highfink : public manager, public fink
{
public:
    highfink();
    highfink(const std::string &fn, const std::string &ln,
             const std::string &j, const std::string &rpo,
             int ico);
    highfink(const abstr_emp &e, const std::string &rpo, int ico);
    highfink(const fink &f, int ico);
    highfink(const manager &m, const std::string &rpo);
    highfink(const highfink &h);
    ~highfink() {}
    virtual void ShowAll() const;
    virtual void SetAll();
    virtual void GetAll(istream  & fin);
    virtual void WriteAll(ostream  & fout) const;
};

#endif // ABSTR_EMP_H
