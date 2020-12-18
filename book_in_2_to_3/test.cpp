#include<iostream>
using namespace std;
int main()
{
auto n =100;
auto x= 1.5;
auto y =1.3e2L;
auto z1 = 0.0;
double z2 = 0;
auto z3 = 0.1l;
long  z4=0;
long double z5 = 10;
auto z6=1000l;
cout<<sizeof(int)<<endl;
cout<<sizeof(float)<<endl;
cout<<sizeof(double)<<endl;
cout<<sizeof(long double)<<endl;
cout<<sizeof(long )<<endl;
cout<<sizeof(long long)<<endl;
cout<<"real number:"<<endl;
cout<<"n: "<<sizeof(n)<<endl;
cout<<"x: "<<sizeof(x)<<endl;
cout<<"y: "<<sizeof y<<endl;
cout<<"z1: "<<sizeof z1<<endl;
cout<<"z2: "<<sizeof z2<<endl;
cout<<"z3: "<<sizeof z3<<endl;
cout<<"z4: "<<sizeof z4<<endl;
cout<<"z5: "<<sizeof z5<<endl;
cout<<"z6: "<<sizeof z6<<endl;
cout<<y<<endl;
auto aa = y;
cout<<sizeof aa<<endl;
return 0;
}
