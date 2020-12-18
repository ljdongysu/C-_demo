#include<string>
#include<iostream>
#include<cstring>
#include<assert.h>
using namespace std;

class Solution {
public:
    string longestPalindrome(string s) {

        if(s.length()==1)
        {
//            cout<<"1"<<endl;
            return s;
        }
        int location = 0;
        int max =0;
        char result[1001];
        if(s.length()==2)
        {
//             cout<<"2"<<endl;
            if(s[0]==s[1])
            return s;
            else
            {
                memcpy(result,s.c_str(),1);
                result[1]='\0';
                return result;
            }
        }
        for(int i=1;i<s.length();i++)
        {
            for(int j=0;j<=i&&(j+i)<s.length();j++)
            {
                if(s[i-j]==s[i+j])
                {
                    if(2*j+1>max)
                    {
//                        cout<<max<<"2*j-1>max"<<endl;
                        max=2*j+1;
                        location=i;
                    }
                    continue;
                }
                else
                {
                    break;
                }
            }
            for(int j=0;j<i&&(j+i)<s.length();j++)
            {
                if(s[i-j-1]==s[i+j])
                {
                    if(2*(j+1)>max)
                    {
                        max=2*(j+1);
                        location=i;
                    }
                    continue;
                }
                else
                {
                    break;
                }
            }
        }

        if(max==1)
        {
            memcpy(result,s.c_str(),1);
            result[1]='\0';
            return result;
        }
        if(max%2==0)
        {
            memcpy(result,s.c_str()+location-max/2,max);
            result[max]='\0';
        }
        else
        {
            memcpy(result,s.c_str()+location-(max-1)/2,max);
            result[max]='\0';
        }
       return result;
    }
};

string stringToString(string input) {
    assert(input.length() >= 2);
    string result;
    for (int i = 1; i < input.length() -1; i++) {
        char currentChar = input[i];
        if (input[i] == '\\') {
            char nextChar = input[i+1];
            switch (nextChar) {
                case '\"': result.push_back('\"'); break;
                case '/' : result.push_back('/'); break;
                case '\\': result.push_back('\\'); break;
                case 'b' : result.push_back('\b'); break;
                case 'f' : result.push_back('\f'); break;
                case 'r' : result.push_back('\r'); break;
                case 'n' : result.push_back('\n'); break;
                case 't' : result.push_back('\t'); break;
                default: break;
            }
            i++;
        } else {
          result.push_back(currentChar);
        }
    }
    return result;
}

int main() {
    string line;
    while (getline(cin, line)) {

//        string s = stringToString(line);


        string ret = Solution().longestPalindrome(line);

        string out = (ret);
        cout << out << endl;
    }
    return 0;
}
