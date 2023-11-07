#include<iostream>
using namespace std;

int main(){
    int array[] = {1,0,1,1,0,1,0,0,0,1};
    int count = 0;
    for(int i=0;i<10;i++){
        if (array[i]==0)
        {
            count++;
        
        }
        
    }
    for (int i = 0; i < 10; i++)
    {
        if (i<count)
        {
            array[i]=0;
        }
        else
        array[i]=1;
    }
    for(int x : array){
        cout<<x<<" ";
    }



    return 0;
}