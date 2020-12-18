#ifndef MYTIME2_H
#define MYTIME2_H
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
   Time operator+(const Time &a) const;
   Time operator -(const Time &a)const;
   Time operator *(double mult)const;
   friend Time operator*(double mult,const Time& t){return t*mult;}
   friend std::ostream & operator<<(std::ostream &os,const Time & t);
};

#endif // MYTIME2_H
