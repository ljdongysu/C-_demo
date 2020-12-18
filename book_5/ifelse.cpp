#include<iostream>
int main()
{
    char ch;
    std::cin.get(ch);
    while(ch!='.')
    {
        if(ch=='\n')
            std::cout<<ch;
        else
            std::cout<<ch+1;
        std::cin.get(ch);
    }
    std::cout<<"\nEnd.\n";
    return 0;
}
