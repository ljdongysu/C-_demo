#include<iostream>
using namespace std;
int main()
{
  int year;
  cin>>year;
  cout<<"What year was your house built?\n";
  char address[90];
  cin.getline(address,80);
  cout<<year<<"\tand address: "<<address<<endl;
}
