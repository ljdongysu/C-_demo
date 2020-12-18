#include<iostream>
#ifndef STRNGBAD_H
#define STRNGBAD_H
class StringBad
{
private:
    char *str;
    int len;
    static int num_strings;
public:
    StringBad();
    StringBad(const char *s);
    ~StringBad();
    StringBad(const StringBad&);
    StringBad& operator =(const StringBad &);
    friend std::ostream &operator <<(std::ostream& os,const StringBad &st);
};
#endif // STRNGBAD_H
