#include<iostream>
#include<ctime>
int main()
{
    using namespace std;
    float secs;
    cout<<"Enter the delay time, in seconds: ";
    cin>>secs;
    clock_t delay = secs*CLOCKS_PER_SEC;
    cout<<"starting\a\n";
    clock_t start = clock();
    while(clock() - start<delay);
    cout<<"done \a\n";


    double price[5] = {4.99,10.99,6.87,7.99,8.49};
    for (double x:price)
        cout<<x<<endl;

    return 0;
}
