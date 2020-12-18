#include<iostream>
#include<climits>
int main()
{
  using namespace std;
  int n_int = INT_MAX;
  short n_short = SHRT_MAX;
  long n_long = LONG_MAX;
  long long n_llong = LLONG_MAX;
  
  cout<<"int is "<<sizeof(int)<<" bytes."<<endl;
  cout<<"short is "<<sizeof n_short <<" bytes."<<endl;
  cout<<"long is "<<sizeof(n_long)<<" bytes."<<endl;
  cout<<"longlong is "<<sizeof(n_llong)<<" bytes."<<endl;

  cout<<endl;
  
  cout<<"Maximum values:"<<endl;
  cout<<"int: "<<n_int<<endl;
  cout<<"short: "<<n_short<<endl;
  cout<<"long: "<<n_long<<endl;
  cout<<"long long: "<<n_llong<<endl; 

  cout<<"Minimum int value = "<<INT_MIN<<endl;
  cout<<"Bits per byte = "<<CHAR_BIT<<endl;
  cout<<"char max: "<<CHAR_MAX<<endl;
  cout<<"uchar max: "<<UCHAR_MAX<<endl;
  cout<<"schar max: "<<SCHAR_MAX<<endl;
  int SSINT(16);
  cout<<SSINT<<endl;
  int test_5{};
  int test_6 = {};
  cout<<"test_5: "<<test_5<<endl;
  cout<<"test_6: "<<test_6<<endl;
  return 0;
}
