#include "brass.h"

#include<iostream>
#include"brass.h"
using std::cout;
using std::endl;
using std::string;
typedef std::ios_base::fmtflags format;
typedef std::streamsize precis;
format setFormat();
void restore(format f,precis p);

Brass::Brass(const std::string &s, long an, double bal)
{
    cout<<"in Brass  s = "<<s<<endl;
    fullName = s;
    acctNum = an;
    balance = bal;
}
void Brass::Deposit(double amt)
{
    if(amt<0)
    {
        cout<<"Negative deposit not allowed; "<<"deposit is cancelled.\n";
    }
    else
        balance += amt;
}

void Brass::Withdraw(double amt)
{
    format initialStat = setFormat();
    precis prec = cout.precision(2);

    if(amt<0)
    {
        cout<<"Withdrawal amount must be positive; "<<"withdrawal canceled.\n";
    }
    else if(amt<=balance)
        balance -= amt;
    else
        cout<<"Withdrawal amount of $"<<amt<<"exceeds your balance.\n"<<"Withdrawal canceled.\n";
    restore(initialStat,prec);
}
double Brass::Balance()const
{
    return balance;
}
void Brass::ViewAcct()const
{
    format initialialState = setFormat();
    precis prec = cout.precision(2);
    cout<<"Client: "<<fullName<<endl;
    cout<<"Account Number: "<<acctNum<<endl;
    cout<<"Balance: $"<<balance<<endl;
    restore(initialialState,prec);
}

BrassPlus::BrassPlus(const std::string &s, long an, double bal, double ml, double r):Brass(s,an,bal)
{
    cout<<"in BrassPlus"<<endl;
    maxLoan = ml;
    owesBank = 0.0;
    rate = r;
}
//BrassPlus::BrassPlus(const Brass &ba, double ml, double r)
//{
//    cout<<"in BrassPlus"<<endl;

//    maxLoan = ml;
//    owesBank = 0.0;
//    rate = r;
//}
void BrassPlus::ViewAcct()const
{
    format initialState = setFormat();
    precis prec = cout.precision(2);
    Brass::ViewAcct();
    cout<<"Maxium loan: $"<<maxLoan<<endl;
    cout<<"Owed to bank: $"<<owesBank<<endl;
    cout.precision(3);
    cout<<"Load Rate: "<<100*rate<<"%\n";
    restore(initialState,prec);
}


void BrassPlus::Withdraw(double amt)
{
    format initialState = setFormat();
    precis prec = cout.precision(2);
    double bal = Balance();
    if (amt<=bal)
    {
        Brass::Withdraw(amt);
    }
    else if(amt<=bal+maxLoan-owesBank)
    {
        double advance = amt-bal;
        owesBank += advance*(1.0 + rate);
        cout<<"Bank advance: $"<<advance<<endl;
        cout<<"Finance charge: $"<<advance* rate<<endl;
        Deposit(advance);
        Brass::Withdraw(amt);
    }
    else
        cout<<"Credit limit exceed.Transaction cancelled.\n";
    restore(initialState,prec);
}
format setFormat()
{
    return cout.setf(std::ios_base::fixed,std::ios_base::floatfield);
}

void restore(format f, precis p)
{
    cout.setf(f,std::ios_base::floatfield);
    cout.precision(p);
}