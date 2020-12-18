#include<iostream>
int main()
{
  using namespace std;
  float hats,heads,test;

  const int code = 66;
  int x = 66;
  //char c1=31325;
  char c2 = {66};
  char c3{code};
  //char c3 = {x};
  x = 31325;
  char c5 = x;
  auto x1 = 'X';
  auto x2 = 3.4;
  cout<<x1<<"\t"<<x2<<endl;
  
  test = 2111222333;
  cout<<test<<endl;

  cout.setf(ios_base::fixed,ios_base::floatfield);
  
  float tree = 3;
  int guess(3.9832);
  int debt = 7.2e8;//换成7.2e12会
  cout<<"tree = "<<tree<<endl;
  cout<<"guess = "<<guess<<endl;
  cout<<"debt = "<<debt<<endl;

  cout<<9/5<<endl;
  cout<<9.0/5.0<<endl;
  cout<<1e7/7.0<<endl;
  cout<<1e7/7.0f<<endl;


  cout<<"Enter a number: ";
  cin>>hats;
  cout<<"Enter another number: ";
  cin>>heads;
  cout<<"hats = "<<hats<<"; heads = "<<heads<<endl;
  cout<<"hats + heads = "<<hats + heads<<endl;
  cout<<"hats - heads = "<<hats - heads <<endl;
  cout<<"hats * heads = "<<hats * heads<<endl;
  cout<<"hats / heads = "<<hats / heads<<endl;
  test = 410293.8;
  cout<<test+1<<endl;

  
  return 0;
}
