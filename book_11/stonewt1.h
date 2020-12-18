#ifndef STONEWT1_H
#define STONEWT1_H
class Stonewt
{
private:
    enum{Lbs_per_stn = 14};
    int stone;
    double pds_left;
    double pounds;
public:
    Stonewt();
    Stonewt(int stn,double lbs);
    Stonewt(double lbs);
    ~Stonewt();
    void show_lbs() const;
    void show_stn() const;
    operator double() const;
    operator int() const;

};
#endif // STONEWT1_H
