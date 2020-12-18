#include<iostream>
using namespace std;
union one4all
{
    int int_val;
    long long_val;
    double double_val;
};
enum bits{one=1,two = 2,four = 4,eight = 8};
enum spectrum{red,orange,yellow,green,blue,voilet,indigo,ultraviolet};
struct antarctica_years_end
{
    int year;
};
int main(int argc, char const *argv[])
{
    antarctica_years_end s01,s02,s03;
    s01.year = 1998;
    s02.year = 002;
    s02.year = 003;
    antarctica_years_end *pa = &s02;
    pa->year = 1999;
    antarctica_years_end trio[3];
    trio[0].year = 2003;
    cout<<trio->year<<endl;
    const antarctica_years_end *arp[3] = {&s01,&s02,&s03};
    cout<<arp[1]->year<<"\t"<<sizeof(antarctica_years_end)<<endl;
    const antarctica_years_end **ppa =arp;
    cout<<"address:"<<&s01<<&s02<<&s03<<endl;
    cout<<(*ppa)<<endl;
    cout<<((*ppa+1))<<"\t"<<(*ppa+1)->year<<"\t"<<sizeof s01<<endl;
    cout<<(*(ppa+1))<<"\t"<<(ppa+1)[0]->year<<endl;


    // short tell[10];
    // short (*ps)[10] = &tell;
    // cout<<sizeof(ps)<<"\t"<<sizeof(*ps)<<"\t"<<sizeof((*ps)[0])<<"\t"<<sizeof(ps[0][0])<<endl;
    // char flower[10] = "rose";
    // char *pc = flower;
    // // pc = flower;
    // pc[2] = 'a';
    // cout<<*pc<<endl;
   
//     int a =10;
//     int *ps = new int [10];
//     *ps = 10;
//     //cout<<*ps<<endl;
//     int *pt = new int;
//     //cout<<*pt<<endl;
//     delete  pt;
//     delete [] ps;
    //cout<<*ps<<endl;
   // cout<<*pt<<endl;
    // int donuts  =6;
    // double cups = 4.5;
    // cout<<"donuts value: "<<donuts;
    // cout<<"and it's address = "<<&donuts<<endl;
    // cout<<"cups value: "<<cups;
    // cout<<"and it's address = "<<&cups<<endl;


    // one4all pail;
    // pail.int_val = 15;
    // cout<<pail.int_val<<endl;
    // pail.double_val = 1.38;
    // cout<<pail.double_val<<endl;
    // cout<<pail.int_val<<endl;
    // return 0;
    // bits myflag;
    // myflag = bits(16);
    // cout<<myflag<<endl;
    // // cout<<zero<<null<<one<<numero_uno<<two<<endl;
    // cout<<sizeof (numero_uno)<<endl;
    // spectrum band;
    // band = orange;
    // cout<<band<<endl;
    // band = spectrum(4003);
    // cout<<band<<endl;
    return 0;
}
