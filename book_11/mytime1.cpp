#ifndef MYTIME0_CPP
#define MYTIME0_CPP
#include<iostream>
#include"mytime1.h"
Time::Time()
{
    hours = minutes= 0;

}
Time::Time(int h,int m)
{
    hours = h;
    minutes = m;
}
void Time::AddHr(int h)
{
    hours+=h;
}

void Time::AddMin(int m)
{
    minutes+=m;
    hours+=minutes/60;
    minutes%=60;
}
void Time::Reset(int h, int m)
{
    hours = h;
    minutes = m;
}
Time Time::Sum(const Time &t) const
{
    Time sum;
    sum.hours = hours+t.hours;
    sum.minutes = minutes +t.minutes;
//    std::cout<<(sum.minutes)<<"   "<<sum.minutes<<"   "<<sum.minutes/60;

    sum.hours+=sum.minutes/60;
    sum.minutes%=60;
    return sum;
}
void Time::Show() const
{
    std::cout<<hours<<" hours, "<<minutes<<" minutes";
}
Time Time::operator +(const Time&t) const
{
//    std::cout<<"hours: "<<hours<<"minutes: "<<minutes<<std::endl;
    Time sum;
    sum.minutes = minutes+t.minutes;
    sum.hours = hours+t.hours+sum.minutes/60;
    sum.minutes%=60;
    return sum;
}
#endif // MYTIME0_CPP
