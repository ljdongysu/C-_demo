#include"1010stack.h"
#include<iostream>
#include<cctype>
#include<cmath>
int main()
{
    double Rad_to_deg=45.0/atan(1.0);
    std::cout<<atan(1.0)<<"    "<<0.78*4<<std::endl;
      std::cout<<Rad_to_deg<<std::endl;
    using namespace std;
    Stack st;
    char ch;
    unsigned long PO;
    cout<<"Please enter A to add a purchase order,\n"
    <<"p to process a PO, or Q to quit.\n";
    while(cin>>ch&&toupper(ch)!='Q')
    {
       
        while(cin.get()!='\n')
        continue;
        if(!isalpha(ch))
        {
            cout<<'\a';
            continue;
        }
        switch(ch)
        {
            case 'A':
            case 'a':cout<<"Enter a PO number to add: ";
            cin>>PO;
            cout<<PO<<endl;
            
            if(st.isfull()){
                cout<<"stack already full.\n";
            }
            else{
                
                st.push(PO);

            }
            break;
            case 'P':
            case 'p':if (st.isempty()){
                cout<<"stack already empty\n";
            }
            else{
                st.pop(PO);
                cout<<"PO #"<<PO<<" poped\n";
            }
            break;
        }
        cout<<"Please enter A to add a purcchase order,\n"
        <<"P to process a PO,or Q to quit.\n";
        
    }
    cout<<"Bye\n";
    return 0;
}