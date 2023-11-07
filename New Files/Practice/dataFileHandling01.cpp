#include<iostream>
#include<fstream>
using namespace std;

int main()

{
    // ofstream file;
    // file.open("E:\\Programs\\Vs Code Projects\\C++\\New Files\\Practice\\file1.txt");
    // cout << "file created!" << endl;
    string name;
    // cout<<"Enter your name: "<<endl;
    // cin >> name;
    // cout <<"Your name is: "<<name<<endl;
    // file<<name;
    // cout<<"Saved";
    // file.close();
    ifstream fileReader;
    fileReader.open("E:\\Programs\\Vs Code Projects\\C++\\New Files\\Practice\\file1.txt");
    while (getline(fileReader,name))
    {
        cout <<"Your name is: "<<name<<endl;
    }
    

    // fileReader>>name;
    // cout <<"Your name is: "<<name<<endl;
    fileReader.close();








    
    

    return 0;
}