#include<iostream>
using namespace std;

int main()
{
    string name,surname;
    cout<< "Enter Your first name"<<endl;
    // char name[100];
    // cin.getline(name, 100);
    getline (cin, name);
    cout<< "Enter Your last name"<<endl;
    getline(cin, surname);
    cout<<"Your name is "<<name+" "+surname<<endl;
    

    
    return 0;
}

