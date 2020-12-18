#include<iostream>
using namespace std;

double warming = 0.3;
void update(double dt);
void local();

int main95external(){
    cout<<"Glibal warming is "<<warming<<" address: "<<&warming<<" drgrees.\n";
    update(0.1);
    cout<<"Global warming is "<<warming<<" address: "<<&warming<<" degerrs.\n";
    local();
    cout<<"Global warming is "<<warming<<" address: "<<&warming<<" degrees.\n";
    return 0;
}