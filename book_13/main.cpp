#include"brass.h"
int main()
{
    BrassPlus BP("name1",1,0,500,0.1);
    return 0;
}




#include<iostream>
using namespace std;
class Father1{ //基类1
public:
    Father1(){
        cout<<"这是Father1类的构造函数"<<endl;
    }
    ~Father1(){
        cout<<"这是Father1类的析构函数"<<endl;
    }
};

class Father2{ //基类2
public:
    Father2(){
        cout<<"这是Father2类的构造函数"<<endl;
    }
    ~Father2(){
        cout<<"这是Father2类的析构函数"<<endl;
    }
};

class Father3{ //基类3
public:
    Father3(){
        cout<<"这是Father3类的构造函数"<<endl;
    }
    ~Father3(){
        cout<<"这是Father3类的析构函数"<<endl;
    }
};

class Son:public Father3,public Father1,public Father2{ //派生类
public:
    Son(){
        cout<<"这是Son类的构造函数"<<endl;
    }
    ~Son(){
        cout<<"这是Son类的析构函数"<<endl;
    }
private:
    Father1 father1;
    Father2 father2;
    Father3 father3;
};

//int main(){
//    Son s;
//    return 0;
//}

