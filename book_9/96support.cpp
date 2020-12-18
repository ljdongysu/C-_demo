#include<iostream>
static double warming =2;

void update(double dt);
void local();
using std::cout;
void update(double dt)
{
    extern double warming;
    warming+=dt;
    cout<<"Updating global warming to "<<warming<<" address: "<<&warming;
    cout<<" degrees.\n";
}

void local()
{
    
    // double warming = 0.8;
    cout<<"Local warming = "<<warming<<" address: "<<&warming<<" degrees.\n";
    // cout<<"But global warming = "<<::warming;
    // cout<<" degrees.\n";
}
