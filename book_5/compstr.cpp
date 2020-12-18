#include<iostream>
#include<string>
int main()
{
    using namespace std;
    string word = "?ate";
    char test[] = "mate";
    for (char ch = 'a';word !=test;ch++)
    {
        cout<<word<<endl;
        word[0]=ch;
    }
    cout<<"After loop ends, owrd is "<<word<<endl;
    return 0;
}
