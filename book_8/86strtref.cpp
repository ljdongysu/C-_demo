
#include"functions.h"

int main(){
    free_throws one ={"Ifelsa Branch",13,14};
    free_throws two = {"Another Knot",10,16};
    free_throws three = {"Minnie Max",7,9};
    free_throws four = {"Whily Looper",5,9};
    free_throws five = {"Long Long",6,4};
    free_throws team = {"Throwgoods",0,0};

    free_throws dup;

    set_pc(one);
    display(one);
    accumulate(team,one);
    display(team);
    display(accumulate(team,two));
    accumulate(accumulate(team,three),four) ;
    display(team);
    dup = accumulate(team,five);
    cout<<"Displating team:\n";
    display(team);
    cout<<"Displaying dup after assignment:\n";
    display(dup);

    cout<<"New display...:"<<endl;

    team.made = 10000;
    cout<<team.made<<"\t"<<dup.made<<endl;
    dup.made  = 200000;
    cout<<team.made<<"\t"<<dup.made<<endl;

    set_pc(four);

    accumulate(dup,five) = four;
    cout<<"Displaying dup after ill-advised assignment:\n";
    display(dup);   
    return 0;
}
