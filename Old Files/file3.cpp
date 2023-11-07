#include<iostream>
using namespace std;

void changeValue(int &z){ // pass by referance
    z=100;
}

main(){


    int p = 5;
                   // same address; done by & operator
    int &q = p;

    cout<<&p<<endl;
    cout<<&q<<endl;
    changeValue(p);
    cout<<p<<endl<<q<<endl;
   

    return 0 ;
}