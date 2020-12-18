#include<iostream>
#include<unistd.h>
#include<pthread.h>
#include<cmath>
#include<vector>
#include<map>
#include<stdlib.h>
#include<stdio.h>
// #include “graphics.h”
// #include<boost/process/windows.hpp>
using namespace std;
int test = 10;
void *thread(void *ptr)
{
    for(int i = 0;i<3;i++){
        sleep(1);
        cout<<"This is a pthread."<<endl;
    }
    return 0;
}
void abc(){
     int test=10000;
    test+=1;
    cout<<"test"<<test<<endl;
}
const int number = 10;
int testmain(){
   
// for(int i=0;i<5;i++){
//     abc();
// }
// cout<<test<<endl;
int a,b;
a=234;
b=~a;
cout<<a<<"\t"<<b<<endl;
printf("\40: The a’s 1 complement(decimal) is %d \n",b);
a=~a;
printf("\40: The a’s 1 complement(hexidecimal) is %x \n",a);
a = 100;
b = ~a;
cout<<a<<"\t"<<b<<endl;




// int driver,mode,i;
// float j=1,k=1;
// driver=VGA;mode=VGAHI;
// initgraph(&driver,&mode,””);
// setbkcolor(YELLOW);
// for(i=0;i<=25;i++)
// {
// setcolor(8);
// circle(310,250,k);
// k=k+j;
// j=j+0.3;
// }

    // unsigned  a,b,c,d;
    // scanf("%o",&a);
    //  printf("%o\n",a);
    // b = a>>4;
    // printf("%o\n",b);
    // c = ~(~0<<4);
    // d = b&c;
    // printf("%o\n%o\n",a,d);
    // int a,b;
    // a = 077;
    // cout<<a<<"\t"<<b<<endl;
    // b = a&3;
    // cout<<a<<"\t"<<b<<endl;

    // cout<<b<<endl;

    // cout<<(5)<<"\t"<<(1^0)<<"\t"<<(0^1)<<"\t"<<(1^1)<<endl;
    // pthread_t id;
    // int ret = pthread_create(&id,NULL,thread,NULL);
    // if(ret){
    //     cout<<"Create pthread error!"<<endl;
    //     return 1;
    // }
    // for(int i=0;i<3;i++){
    //     cout<<"This is the main process."<<endl;
    //     sleep(1);
    // }
    // pthread_join(id,NULL);

    // int a[10] = {1,2,3,4,5,6,7,8,9};
    // cout<<sizeof(a)/sizeof(int)<<endl;
    //     for(int i = 0;i<sizeof(a)/sizeof(int);i++)
    // cout<<a[i]<<endl;
    // cout<<"original number"<<endl;
    // for (int i=0;i<sizeof(a)/2/sizeof(int);i++)
    // {
        
    //     int temp = a[i];
    //     a[i] = a[sizeof(a)/sizeof(int)-i-1];
    //     a[sizeof(a)/sizeof(int)-i-1] = temp;
    // }
    // for(int i = 0;i<sizeof(a)/sizeof(int);i++)
    // {
    // cout<<a[i]<<endl;
    // }
    return 0;
    // map<int,map<int,float> > voerlaps;
    // for(int i=0;i<5;i++)
    // for(int j=0;j<10;j++)
    // {
    //     voerlaps[i][j] = i*10+j;
    // }
    // for(map<int,map<int,float> >::iterator it = voerlaps.begin();it!=voerlaps.end();++it)
    // {
    //     cout<<it->first<<endl;
    //     // for(int i=0;i<it->second.size();i++)
    //     // {
    //     //     cout<<it->second[i]<<endl;
    //     // }
    // }

    // vector<int> a(10,-1);
    // for (int i=0;i<a.size();i++)
    // {
    //     cout<<a[i]<<endl;
    // }
    // int c = 2;
    // cout<<pow(3,2)<<endl;

}