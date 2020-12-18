#ifndef BRASS_H
#define BRASS_H
#include<string>
class Brass
{
private:
    std::string fullName;
    long acctNum;
    double balance;
public:
    Brass(const std::string &s ,long an =-1,double bal =0.0);
    void Deposit(double amy);
    virtual void Withdraw(double amt);
    double Balance()const;
    virtual void ViewAcct() const;
    virtual ~Brass(){}
};
//Brass Plus Account Class
class BrassPlus:public Brass
{
private:
    double maxLoan;
    double rate;
    double owesBank;
public:
    BrassPlus(const std::string &s = "Nullbody",long an =-1,double bal = 0.0,double ml = 500,double r = 0.11125);
//    BrassPlus(const Brass &ba,double ml=500);
    virtual void ViewAcct()const;
    virtual void Withdraw(double amt);
    void ResetMax(double m){maxLoan = m;}
    void Resetrate(double r){rate = r;}
    void resetOwes(){owesBank = 0;}
};

#endif // BRASS_H
