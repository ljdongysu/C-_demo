#include<iostream>
using namespace std;
int main()
{
  unsigned short *a;
  char *b;
  cout<<sizeof(*a)<<endl;
  cout<<sizeof(a)<<endl;
  cout<<sizeof(*b)<<endl;
  cout<<sizeof(b)<<endl;
  return 0;
}
