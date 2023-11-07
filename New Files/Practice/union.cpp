#include<iostream>
using namespace std;

union money // only use 1 data
{
   int inr;
   int dollar;
   int yen;

};


int main()
{
    money m;
    m.dollar = 50;
    cout<<m.dollar;
    
    
    return 0;
}