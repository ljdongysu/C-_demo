#ifndef TABTEEN0_H
#define TABTEEN0_H
#include<string>
using std::string;
class TableTennisPlayer
{
private:
    string firstname;
    string lastname;
    bool hasTable;
public:
    TableTennisPlayer(const string &fn = "none",
                      const string & ln = "none",bool ht = false);
    void Name()const;
    bool HasTable()const{return hasTable;}
    void ResetTable(bool v){hasTable = v;}
};
class RatePlayer : public TableTennisPlayer
{
private:
    unsigned int rating;
public:
    RatePlayer(unsigned int r = 0,const string &fn = "none",const string &ln = "none", bool ht = false);
    RatePlayer(unsigned int r, const TableTennisPlayer &tp);
    unsigned int Rating()const{return rating;}
    void ReesetRating(unsigned int r){rating = r;}
};
#endif // TABTEEN0_H
