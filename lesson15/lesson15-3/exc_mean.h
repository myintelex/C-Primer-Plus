#ifndef EXC_MEAN_H
#define EXC_MEAN_H

#include <iostream>
#include <exception>

class bad_hgmean : public std::logic_error
{
private :
    double v1;
    double v2;
public :
    bad_hgmean(const char * msg, double a, double b)
        : logic_error(msg), v1(a), v2(b){}
    void show_error() const {std::cout << what() << "Arguments: "
                                       << v1 << ", " << v2 << std::endl;}
};

class bad_hmean : public bad_hgmean
{
public:
    bad_hmean(double a, double b)
        :bad_hgmean("hmean() invalid arguments: a = -b\n", a, b) {}
};

class bad_gmean : public bad_hgmean
{
public :
    bad_gmean(double a, double b)
        :bad_hgmean("gmean() arguments should be >= 0\n", a, b){}
};

#endif // EXC_MEAN_H
