#include"functions.h"
void display(const free_throws & ft)
{
    cout<<"Name: "<<ft.name<<"\n";
    cout<<" Made: "<<ft.made;
    cout<<" Attempts: "<<ft.attempts;  
    cout<<" Percent: "<<ft.percents<<"\n";
    
}
void set_pc(free_throws & ft)
{
    if (ft.attempts!=0){
        ft.percents  =100.0f *float(ft.made)/float(ft.attempts);
    }
    else{
        ft.percents=0;
    }
}

free_throws &accumulate(free_throws & target,const free_throws & source)
{
    target.attempts += source.attempts;
    target.made += source.made;
    set_pc(target);
    return target;
}
