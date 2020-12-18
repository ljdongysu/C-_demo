#include<iostream>
using namespace std;
const int ArSize = 8;
int sum_arr(const int *begin,const int * end);
int sum_a(const int *a,const int *b);
// int sum_b(const int a[][4],const int b[][4]);
int main(){
    int a=1;
    int b=2;
    cout<<sum_a(&a,&b)<<endl;
    // const int**p2;
    // int *p1;
    // const int n=123;
    // *p2 = &n;
    // p2 = &p1;//这里出错，二级指针不可以混用
    // *p1 = 10;
    // cout<<n<<endl;

    char *d;
    cin>>d;
    int age = 39;
    int * pt = &age;
    const int *pd = pt;
    cout<<age<<"\t"<<*pt<<endl;
    age = age+1;
    *pt = *pt+1;
   
    cout<<age<<"\t"<<*pt<<endl;
    cin>>d;
    int cookies[ArSize] = {1,2,4,8,16,32,64,128};
    int sum = sum_arr(cookies,(cookies+ArSize));
    cout<<"Totle cookies eaten: "<<sum<<endl;
    sum = sum_arr(cookies,cookies+3);
    cout<<"First three eaters ate "<<sum<<"cookies\n";
    sum = sum_arr(cookies+4,cookies+8);
    cout<<"Last four eaters ate "<<sum<<" cookies.\n";
    return 0;
}
int sum_a(const int *a,const int *b){
    return *a + *b;
}
int sum_arr(const int *begin,const int* end){
    const int *p;
    p = begin;
    int total=0;
    for (;p!=end;p++){
        total=total+*p;
    }
    return total;

}