#include<iostream>
int main()
{
    using namespace std;
    char ch;
    int count=0;
    cout<<"Enter characters;enter # to quit:\n";
    //cin>>ch;
    cin.get(ch);
    while(ch!='#')
    {
        cout<<ch;
        ++count;
        cin.get(ch);
	//cin>>ch;
    }
    cout<<endl<<count<<" characters read\n";
    return 0;
}
