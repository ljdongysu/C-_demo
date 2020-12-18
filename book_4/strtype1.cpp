#include<iostream>
using namespace std;
struct inflatable
{
    char name[20];
    float volume;
    double price;
};
struct torgle_register
{
    unsigned int SN:4;
    unsigned int:4;
    bool goodIn:1;
    bool goodTorgle:1;
};
int main()
{
    using namespace std;



    torgle_register tr = {14,true,false};
    cout<<tr.SN<<"  "<<tr.goodIn<<"  "<<tr.goodTorgle<<endl;
    
    inflatable bouquet = 
    {
        "sunflowers",
        0.20,
        12.49
    };
    inflatable choice;
    cout<<"bouquet: "<<bouquet.name<<" for $";
    cout<<bouquet.price<<endl;

    
    choice = bouquet;
    cout<<"choice: "<<choice.name<<" for $";
    cout<<choice.price<<endl;
}
