// #ifndef STOCK_H_
// #define STOCK_H_
// #include<string>

// class Stock
// {
//     private:
//         std::string company;
//         long shares;
//         double share_val;
//         double total_val;
//         void set_tot(){total_val = shares*share_val;}
//     public:
//         Stock();
//         Stock(const std::string &co,long n =0,double pr =0.0);//一会看看改成默认构造函数后是否出错
        
//         ~Stock();
//         // void acquire(const std::string &co,long n,double pr);
//         void buy(long num,double price);
//         void sell(long num,double price);
//         void update(double price);
//         void show();
// };
// #endif