#ifndef MYTIME0_H
#define MYTIME0_H
#include<iostream>
class Time
{
private:
    int hours;
    int minutes;
public:
   Time();
   Time(int h,int m =0);
   void AddMin(int m);
   void AddHr(int h);
   void Reset(int h = 0,int m = 0);
   Time Sum(const Time & t) const;
   void Show( ) const;
//   Time operator+(const Time &a) const;
};
#endif // MYTIME0_H
