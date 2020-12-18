#include<iostream>
#include"consttest.h"
extern int tom;
static int dick = 10;
int harry = 200;

void remote_access()
{   
    
    using namespace std;
    cout<<fingers<<"consttest address:"<<&fingers<<endl;
    cout<<"remote_access() reports the following address:\n";
    cout<<&tom<<" = &tom, "<<&dick<<" = &dick, ";
    cout<<&harry<<" = &harry\n";
}