#include<iostream>
void swapr(int & a,int &b);
void swapp(int * p,int * q);
void swapv(int a ,int b);
void swapq(const int a);
int main(int argc, char const *argv[])
{
    using namespace std;
    int wallet1 = 300;
    int wallet2 = 250;
    const int &test = wallet1+1;
    cout<<"test: "<<test<<endl;
    cout<<"wallet1 = "<<wallet1;
    cout<<" wallet2 = "<<wallet2<<endl;
    cout<<"Using reference to wap contents:\n";
    swapr(wallet1,wallet2);
   
    cout<<"wallet1 = "<<wallet1;
    cout<<" wallet2 = "<<wallet2<<endl;

    cout<<"Using pointers to wap contents:\n";
    swapp(&wallet1,&wallet2);
    cout<<"wallet1 = "<<wallet1;
    cout<<" wallet2 = "<<wallet2<<endl;

    cout<<"Using value to wap contents:\n";
    swapv(wallet1,wallet2);
    cout<<"wallet1 = "<<wallet1;
    cout<<" wallet2 = "<<wallet2<<endl;

    cout<<"New code!"<<endl;
    swapq(wallet1+1);
    // int rats = 101;
    // int another_rats = 222;
    // int *pt = &rats;
    // int &rodents = *pt;
    // cout<<"rats = "<<rats;
    // cout<<", rodents = "<<rodents<<endl;
    // cout<<"rates address = "<<&rats<<endl;
    // cout<<", rodents address = "<<&rodents<<endl;
    // cout<<"*pt = "<<*pt<<endl;
    // cout<<"*pt address"<<pt<<endl;
    // pt = &another_rats;
    // cout<<"rats = "<<rats;
    // cout<<", rodents = "<<rodents<<endl;
    // cout<<"rates address = "<<&rats<<endl;
    // cout<<", rodents address = "<<&rodents<<endl;
    // cout<<"*pt = "<<*pt<<endl;
    // cout<<"*pt address"<<pt<<endl;
    return 0;
}

void swapr(int &a,int&b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}
void swapp(int *p,int *q){
    int temp = *p;
    *p = *q;
    *q = temp;
}
void swapv(int a,int b){
    int temp = a;
    a = b;
    b = temp;
}
void swapq(const int a){
    using namespace std;
    cout<<a<<endl;
}