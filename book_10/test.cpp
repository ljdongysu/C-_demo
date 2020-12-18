#include<iostream>
#include <stdio.h>
using namespace std;
void test(int a=10,int b=20);
int main(){
    char a[4] = {'a','b','c',0x0};
    printf("%s\n",a);
    int* b = (int*)a;
    printf("%08x\n",*b);
    printf("%08d\n",*b);
   *b = 0x00323334;
    printf("%s\n",a);
// test(10,20);
}
// void test(int a=1,int b=1){cout<<(a+b);}
void test(int c,int d)
{
    cout<<(c+d)<<endl;
}