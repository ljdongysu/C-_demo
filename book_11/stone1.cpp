#include"stonewt1.h"
#include<iostream>
int main()
{
    using std::cout;
    Stonewt popins(9,2.8);
    double p_wt = popins;
    cout<<"Convert to double => ";
    cout<<"Poppins: "<<p_wt<<" pounds.\n";
    cout<<"Convert to int => ";
    cout<<"poppins: "<<int(popins)<<" pounds\n";
    return 0;
}
