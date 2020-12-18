#ifndef FUNCTIONS_H_
#define FUNCTIONS_H_
#include<iostream>
#include<string>
using namespace std;
struct free_throws
{
    string name;
    int made;
    int attempts;
    float percents;
};
void display(const free_throws & ft);
void set_pc(free_throws & ft);
free_throws  &accumulate(free_throws & target,const free_throws & source);

#endif
