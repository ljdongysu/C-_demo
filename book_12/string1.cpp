#include<cstring>
#include"string1.h"
using std::cout;
using std::cin;
using std::endl;
int String::num_strings=0;
int String::HowMany()
{
    return num_strings;
}
String::String()
{
    len = 4;
    str = new char[1];
    str = '\0';
    num_strings++;
}
String::String(const char *st)
{
    len = std::strlen(st);
    str = new char[len+1];
    std::strcpy(str,st);
    num_strings++;
}

String::String(const String& st)
{
    len = st.len;
    str = new char[len+1];
    std::strcpy(str,st.str);
    num_strings++;
}

String::~String()
{

    delete[]str;
    num_strings--;
}

String& String::operator =(const String &st)
{
    if(this == &st)
    {
        return *this;
    }
    delete []str;
    len = st.len;
    str = new char[len+1];
    std::strcpy(str,st.str);
//    num_strings++;
    return *this;
}

String& String::operator =(const char *st)
{
    delete []str;
    len = std::strlen(st);
    str = new char[len+1];
    std::strcpy(str,st);
    num_strings++;
    return *this;
}

char& String::operator [](int i)
{
    //return str[i];
    return str[i];
}

const char & String::operator [](int i)const
{
    //return str[i];
    return str[i];
}

bool operator <(const String&st,const String&st2)
{
    return(std::strcmp(st.str,st2.str)<0);
}
bool operator >(const String&st1,const String &st2)
{
    return (st2<st1);
}

bool operator ==(const String &st1,const String &st2)
{
    return (std::strcmp(st1.str,st2.str)==0);
}

ostream &operator <<(ostream & os,const String &st)
{
    os<<st.str;
    return os;
}

istream &operator >>(istream & is,String &st)
{
    char temp[String::CINLIM];
    is.get(temp,String::CINLIM);
    if(is)
    {
        st=temp;
    }
    while (is&&is.get()!='\n') {
        continue;
    }
    return is;

}
