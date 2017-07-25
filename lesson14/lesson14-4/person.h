#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include <ctime>

using namespace std;

class Person
{
private:
    string m_Name;
public:
    Person();
    Person(string s):m_Name(s){}
    virtual void set() {cout << "Input the Name:"; cin >> m_Name;}
    virtual void show()const{cout <<"Person: "<< m_Name << endl;}
};

class Gunslmger : virtual public Person
{
private:
    double m_DrawGun;
    int m_Stars;
public:
    Gunslmger(){}
    Gunslmger(string s):Person(s){}
    Gunslmger(string s, double time, int num)
        :Person(s), m_DrawGun(time), m_Stars(num){}
    virtual void show()const{
        Person::show();
        cout << m_DrawGun << "s " << m_Stars << endl;}
    double Draw() const {return m_DrawGun;}
    virtual void set() {Person::set(); cout << "Input the Time:"; cin >> m_DrawGun;
               cout << "Input the Star:"; cin >> m_Stars;}

};

class PorkPlayer : virtual public Person
{
public:\
    PorkPlayer(){}
    PorkPlayer(string s):Person(s){}
    int Draw()const {srand((unsigned int)(time(NULL))); return rand()%52 + 1;}
    void show() const { cout << "PorkPlayer: ";
                        Person::show();
                        cout << "next cards: " << Draw();}
};

class BadDude : public Gunslmger, public PorkPlayer
{
public:
    BadDude(){}
    double Gdrow()const {return Gunslmger::Draw(); }
    int Cdrow() const {return PorkPlayer::Draw(); }
    void show() const {
        cout << "BadDude: ";
        cout << "Time" << Gunslmger::Draw() << "s "  << endl;;
        cout << "next cards: " << PorkPlayer::Draw() << endl;}
    void set(){Gunslmger::set();}
};

#endif // PERSON_H
