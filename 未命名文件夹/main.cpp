#include<iostream>
#include<string>
#include<string.h>
// #include "functiona.h"
using namespace std;
void pfunction();
int main()
{
pfunction();
string abc = "hello";
//char * cde = const_cast<char*>(abc.c_str());
char cde[100] = "abcde";
//abc.copy(cde,4,1);
//strcpy(cde,abc.c_str());
//cde[5] = '\0';
//char * cde = (char*)(abc.c_str());
//std::cout<<cde;
string test = cde;
std::cout<<cde<<std::endl;
// std::cout<<aaaa<<std::endl;

return 0;
}
