#ifndef USETIME1_CPP
#define USETIME1_CPP
#include<iostream>
#include"mytime2.h"
int main()
{
    using std::cout;
    using std::endl;

    Time weeding(4,35);
    Time waxing(2,47);
    Time diff;
    Time total;
    Time adjusted;

    cout<<"weeding time = ";
    weeding.Show();
    cout<<endl;

    cout<<"waxing time = ";
    waxing.Show();
    cout<<endl;

    cout<<"total work time = ";
    total=weeding+waxing;
    total.Show();
    cout<<endl;

    diff = weeding-waxing;
    cout<<"weeding-waxing time = ";
    diff.Show();
    cout<<endl;

    adjusted = 1.5*total;
    cout<<"adjusted wordk time = ";
    adjusted.Show();
    cout<<endl;

    return 0;

}

#endif // USETIME1_CPP
