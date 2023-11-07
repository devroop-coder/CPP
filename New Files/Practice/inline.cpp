#include<iostream>
using namespace std;
inline int product (int a,int b){
    return a*b;

 }
int main()
{
    int a,b;
    cout<<"Enter two Numbers :"<<endl;
    cin>>a>>b;
    cout<<"Product is "<<product(a,b)<<endl;
    cout<<"Product is "<<product(a,b)<<endl;
    cout<<"Product is "<<product(a,b)<<endl; // replace calling function with main function
    cout<<"Product is "<<product(a,b)<<endl; // takes more cache memory
    cout<<"Product is "<<product(a,b)<<endl;
    cout<<"Product is "<<product(a,b)<<endl;
    return 0;
}

