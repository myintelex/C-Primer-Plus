#ifndef COW_H_
#define COW_H_
class Cow
{
private:
    char name[20];
    char * hobby;
    double weight;
public:
    Cow();
    Cow(const char * nm, const char * ho, double wt);
    Cow(const Cow & cw);
    ~Cow();
    Cow & operator=(const Cow & c);
    void show_cow();
};
#endif