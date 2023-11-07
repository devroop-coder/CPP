#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    char data;
    ifstream output;
    ofstream input;
    output.open("E:\\Programs\\Vs Code Projects\\C++\\New Files\\Practice\\file1.txt");
    input.open("E:\\Programs\\Vs Code Projects\\C++\\New Files\\Practice\\file2.txt");
    while (output.get(data))
    {
        input.put(data);
    }
    
    output.close();
    input.close();

    // remove(file Name);   To delete the file
    return 0;
}