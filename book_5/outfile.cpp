#include<iostream>
#include<fstream>
int main()
{
    using namespace std;
    char automobile[50];
    int year;
    double a_price;
    double d_price;
    ofstream outFile;
    outFile.open("carinfo.txt");
    cin.getline(automobile,50);
    cout<<automobile;
    outFile<<automobile;
    outFile.close();
    return 0;
}
