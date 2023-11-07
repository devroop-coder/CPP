#include<iostream>
using namespace std;

struct employee
{
    char favChar;
    int eId;
    int salary;
}em;


int main()
{
    // employee em;
    cout<< "Enter Employee id: "<<endl;
    cin>>em.eId;
    cout<< "Enter Employee Faq Char: "<<endl;
    cin>>em.favChar;
    cout<< "Enter Employee salary: "<<endl;
    cin>>em.salary;
    cout<<"Employee id is "<<em.eId<<endl;
    cout<<"Employee Fav Char is "<<em.favChar<<endl;
    cout<<"Employee salary is "<<em.salary<<endl;
    
    return 0;
}