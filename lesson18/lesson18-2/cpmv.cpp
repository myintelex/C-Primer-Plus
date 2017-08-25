#include "cpmv.h"

Cpmv::Cpmv()
{
    pi = new Info;
}

Cpmv::Cpmv(std::__cxx11::string q, std::__cxx11::string s)
{
    pi = new Info{q, s};
}

Cpmv::Cpmv(const Cpmv &cp)
{
    pi = new Info;
    pi->qcode = cp.pi->qcode;
    pi->zcode = cp.pi->zcode;
}

Cpmv::Cpmv(Cpmv &&mv)
{
    pi = mv.pi;
    mv.pi = nullptr;
}

Cpmv::~Cpmv()
{

}

Cpmv &Cpmv::operator =(const Cpmv &cp)
{
    pi->qcode = cp.pi->qcode;
    pi->zcode = cp.pi->zcode;
    return *this;
}

Cpmv &Cpmv::operator =(Cpmv &&mv)
{
    if (pi != nullptr)
        delete pi;
    pi = mv.pi;
    mv.pi = nullptr;
    return *this;
}

Cpmv Cpmv::operator +(const Cpmv &obj) const
{
    Cpmv temp;
    temp.pi->qcode = pi->qcode + obj.pi->qcode;
    temp.pi->zcode = pi->zcode + obj.pi->zcode;
    return temp;
}

void Cpmv::Display() const
{
    using std::cout;
    using std::endl;
    cout << "Qcode: " << pi->qcode << endl;
    cout << "Zcode: " << pi->zcode << endl;
}
