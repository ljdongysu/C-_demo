#include<iostream>
using std::cout;
#include"stonewt.h"
void display(const Stonewt &st,int n);
int main()
{

//    Stonewt incongnito = 275;
//    Stonewt wolfe(285.7);
//    Stonewt taft(21,8);
//    cout<<"The celebrity weighed ";
//    incongnito.show_stn();
//    cout<<"the detective weighed ";
//    wolfe.show_stn();
//    cout<<" The President weighed ";
//    taft.show_stn();
//    incongnito = 276.8;
//    taft = 325;
//    cout<<"After dinner, the celebrity weighted ";
//    incongnito.show_stn();
//    cout<<"After dinner, the President weighter ";
//    taft.show_stn();
//    display(taft,2);
//    cout<<"The wrestoler weighted even more.\n";
//    display(422,2);
//    cout<<"No stone left unearned\n";
    Stonewt popins(9,2.8);
    double p_wt = popins;
//    long gone = popins;
    cout<<"Convert to double =>";
    cout<<"Poppins: "<<p_wt<<" pounds.\n";
    cout<<"Convert to int =>";
    cout<<"Poppins: "<<int(popins)<<" pounds.\n";
    return 0;
}
void display(const Stonewt &st, int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<"Wow!";
        st.show_stn();
    }
}
