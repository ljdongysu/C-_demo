#include<iostream>
using namespace std;
int fill_arrary(double [],int limit);
int main(){
    const int size_n = 5;
    int (a)[10];
    int *b;
    double *c;
    char d[10];
    cout<< sizeof a<<endl;
    cout<<a<<endl;
    cout<<a+1<<endl;
    
    cout<< b<<endl;
    cout<<b+1<<endl;
    cout<<sizeof c<<endl;
    cout<<d<<endl;
    cout<<d+1<<endl;
    cout<<"a"<<endl;
    cout<<sizeof (a[1])<<endl;
    cout<<sizeof a[0]<<endl;
    cout<<sizeof (*b)<<endl;
    cout<<sizeof (*c)<<endl;
    cout<<sizeof (*d)<<endl;
    cout<<sizeof d<<endl;
    cin>>d[0];
    double arr[size_n];
    cout<<"result:"<<fill_arrary(arr,size_n)<<endl;
    return 0;
}

int fill_arrary(double ar[],int limit){
    double temp;
    int i;
    for (i=0;i<limit;i++)
    {
        cout<<"Enter value #"<<(i+1)<<": ";
        cin>>temp;
        if (!cin){
            cout<<"in if(!cin)"<<endl;
            cin.clear();
            while (cin.get()!='\n')
                continue;
            cout<<"Bad input;inout process terminatrd.\n";
            break;
        }
        else if (temp<0)
            break;
        ar[i] = temp;
    }
    return i;

}

