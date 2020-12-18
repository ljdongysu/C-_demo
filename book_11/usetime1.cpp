#ifndef USETIME1_CPP
#define USETIME1_CPP
#include<iostream>
#include"mytime1.h"
int bmain()
{
    using std::cout;
    using std::endl;
    Time planning;
    Time coding(2,40);
    Time fixing(5,55);
    Time total;

    cout<<"planning time = ";
    planning.Show();
    cout<<endl;

    cout<<"coding time = ";
    coding.Show();
    cout<<endl;

    cout<<"fixing time = ";
    fixing.Show();
    cout<<endl;

    total = coding+fixing;
    cout<<"coding+fixing time = ";
    total.Show();
    cout<<endl;

    Time morefixing(3,28);
    cout<<"more fixing time = ";
    morefixing.Show();
    cout<<endl;
    total = morefixing.operator +(total);
    total.Show();
    std::cout<<endl;
    return 0;

}

#endif // USETIME1_CPP
