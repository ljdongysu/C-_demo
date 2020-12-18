#include<iostream>
#include"tabtenn0.h"
int bmain()
{
    using std::cout;
    using std::endl;
    TableTennisPlayer player1("Tara","Boomdea",false);
    RatePlayer rplayer1(1140,"Mallory","Duck",true);
    rplayer1.Name();
    if(rplayer1.HasTable())
        cout<<":has a table.\n";
    else
        cout<<":hasn't a table.\n";
    player1.Name();
    if(player1.HasTable())
        cout<<":has a table.\n";
    else
        cout<<":hasn't a table.\n";
    cout<<"Name: ";
    rplayer1.Name();
    cout<<";Rating: "<<rplayer1.Rating()<<endl;
    RatePlayer rplayer2(1212,player1);
    cout<<"Name: ";
    rplayer2.Name();
    cout<<": Rating: "<<rplayer2.Rating()<<endl;

    RatePlayer rplayer3(114,"Mallory","Duck",true);
    TableTennisPlayer &rt = rplayer3;
    TableTennisPlayer *pt = &rplayer3;
    rt.Name();
    pt->Name();


    return 0;
}
