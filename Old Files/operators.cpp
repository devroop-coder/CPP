#include <iostream>
using namespace std;

int main(){

    // int a = 7, b = 5;

    // cout<< a + b <<endl; // 12
    // cout<< a - b <<endl; // 2
    // cout<< a * b <<endl; // 35
    // cout<< a / b <<endl; // 5
    // cout<< a % b <<endl; // 2

    // cout<< (a == b) <<endl; // False 0
    // cout<< (a > b )<<endl; // True 1
    // cout<< (a != b) <<endl; // True 1

    //Bitwise operators

    int num1 = 5,num2 = 8; // 0 1 0 1
                           // 1 0 0 0

    cout<<(num1<<1)<<"  "; //10
    cout<<(num1>>1)<<"  "; //2
    cout<<(num1|num2)<<"  "; //1 1 0 1 = 13
    cout<<(num1&num2)<<"  "; //0 0 0 0 = 0
     cout<<endl;

//-------------------------------------------

cout<<sizeof(num1);


    return 0;
}