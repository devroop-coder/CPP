#include<iostream>
using namespace std;
int p = 5; //global variable

void print(); // function prototype

main(){

    int p = 7; //local variable

    cout<<p<<endl;; // ans = 7 ; local variable >> global varible
    
    cout<< :: p<<endl;; // ans = 5 ; :: for call global variable over local variable

    print();

    return 0;

}
void print(){
    cout<<p<<endl;
}