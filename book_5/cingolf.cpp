#include<iostream>
const int MAX_ = 5;
int main()
{
    using namespace std;
    int golf[MAX_];
    cout<<"You must enter "<<MAX_<<" rounds.\n";
    int i;
    for (i=0;i<MAX_;i++)
    {
        cout<<"round #"<<i+1<<": ";
        while(!(cin>>golf[i])){
            cin.clear();
            while(cin.get() !='\n') continue;
            cout<<"Please enter anumber: ";
        }
    }
    double total = 0.0;
    for(i=0;i<MAX_;i++)
        total+=golf[i];
    cout<<total/MAX_<<" = average score"<<MAX_<<" rounds\n";
    return 0;
}   
