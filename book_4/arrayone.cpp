#include<iostream>
#include<string>
using namespace std;
int main()
{   
    const char c[2] ="a";
    string a = "aa""bb1" ;
    const char b[3] = "bb";
    cout<<a+c<<endl;
    int cards[5]={};
    int num_elements = sizeof cards/sizeof (int);
    cout<<num_elements<<endl;
    cout<<cards[2]<<endl;
    long plifs[] = {25,1,3.0l};
    char slifs[4]={'h','i'};
    char tlifs[4] = {'h','i',112,'\0'};
    char dog[4]="a""bc";
    char cat[7]={'b','e','g','i','n','n','\0'};
    cout<<dog<<endl;
    cout<<dog[0]<<dog[1]<<dog[2]<<dog[3]<<dog[4]<<endl;
    
    cout<<cat<<endl;
    return 0;
}
