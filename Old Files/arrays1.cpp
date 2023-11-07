#include<iostream>
using namespace std;

int main(){
    //  int array[]={1,2,3,4,5};

    // cout<<array[4];
    // cout<<sizeof(array)<<endl;
    // cout<<sizeof(array)/sizeof(array[0])<<endl;
    // int length= sizeof(array)/sizeof(array[0]);
    // for (int i = 0; i < length; i++)
    // {
    //     cout<<array[i]<<endl;
    // }
    
    // for(int x:array){
    //     cout<<x<<endl;
    // }

    // char vowels[5];
    // for (int i = 0; i < 5; i++)
    // {
    //     cin>>vowels[i];
    // }
    // for (int i = 0; i < 5; i++)
    // {
    //     cout<<vowels[i]<<"  ";
    // }
    // for(char &y:vowels){
    //     cin>>y;
    // }
    // for(char y:vowels){
    //     cout<<y<<" ";
    // }
    // int sum = 0 ;
    // for (int i = 0; i < sizeof(array)/sizeof(array[0]); i++)
    // {
    //     sum+= array[i];
    // }
    // cout<<sum<<endl;
    // int array[]={654,354,516,508,495,64,57,6387,84,8654,638};
    // int max=array[0];
    // for (int i = 0; i < sizeof(array)/sizeof(array[0]); i++)
    // {
    //     if (array[i]>max)
    //     {
    //         max=array[i];
    //     }
        
    // }
    // cout<<max;

    int array[]={654,354,516,508,495,64,57,6387,84,8654,638};
    int n,ans=-1;
    cin>>n;
    for (int i = 0; i < sizeof(array)/sizeof(array[0]); i++)
    {
        if (array[i]==n)
        {
            ans=i;
            break;
        }
        
    }cout<<ans;



    return 0;
}