#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    
    const int Size = 10;
    char name3[Size];
    cout<<"empty char array:"<<strlen(name3)<<endl;
    char name4[Size]="abcdef";
    //cin>>name3;
    (cin>>name3).get();
   
   // cin.getline(name4,Size);
    //cin>>name3;
    //cin>>name4;
    cout<<"name3: "<<name3<<endl;
    cout<<"name4: "<<name4<<endl;

    //cout<<name3<<"    "<<sizeof name3<<"    "<<strlen(name3)<<endl;
    cout<<name3<<"    "<<sizeof name4<<"    "<<strlen(name4)<<endl;
    string s1 = name4;
    cout<<"len of s1:"<<s1.size()<<endl;
    char name1[3];
    char name2[Size] = "C++owboy";
    name2[3]='\0';
    int number1[Size];
    cout<<sizeof name2<<endl;
    cout<<strlen(name1)<<'\t'<<strlen(name2)<<endl;
    cout<<name1[0]<<"a11  "<<name1[1]<<endl;
    return 0;
}
