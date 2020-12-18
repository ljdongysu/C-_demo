#include<iostream>
int main()
{
  using std::cout;
  using std::endl;
  using std::hex;
  int number= 20;
  char ch = 'M';
  cout<<ch<<"\t"<<'M'<<endl;
  cout.put(ch);
  cout<<"\t"<<endl;
  cout.put('M');
  cout<<endl;
  cout.put('$');
  cout<<'$'<<endl;
  
  cout<<number<<endl;
  cout<<hex<<number<<endl;

  cout<<"hi\x4a there";

  

}
