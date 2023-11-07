#include<iostream>
#include<vector>
using namespace std;

int main()
{
    
    vector<int> v;

    // cout<<"Size : "<<v.size()<<endl;
    // cout<<"Capacity : "<<v.capacity()<<endl;

    // v.push_back(1);
    // cout<<"Size : "<<v.size()<<endl;
    // cout<<"Capacity : "<<v.capacity()<<endl;
    // v.push_back(3);
    // cout<<"Size : "<<v.size()<<endl;
    // cout<<"Capacity : "<<v.capacity()<<endl;
    // v.insert(v.begin()+2,2);
    // cout<<"Size : "<<v.size()<<endl;
    // cout<<"Capacity : "<<v.capacity()<<endl;
    // v.push_back(3);
    // cout<<"Size : "<<v.size()<<endl;
    // cout<<"Capacity : "<<v.capacity()<<endl;
    // v.push_back(4);
    // cout<<"Size : "<<v.size()<<endl;
    // cout<<"Capacity : "<<v.capacity()<<endl;
    // v.push_back(5);
    // cout<<"Size : "<<v.size()<<endl;
    // cout<<"Capacity : "<<v.capacity()<<endl;

    // v.resize(6);
    // cout<<"Size : "<<v.size()<<endl;
    // cout<<"Capacity : "<<v.capacity()<<endl;
    // v.pop_back();
    // cout<<"Size : "<<v.size()<<endl;
    // cout<<"Capacity : "<<v.capacity()<<endl;
    // v.erase(v.end()-2);
    // cout<<"Size : "<<v.size()<<endl;
    // cout<<"Capacity : "<<v.capacity()<<endl;
    // v.clear();
    // cout<<"Size : "<<v.size()<<endl;
    // cout<<"Capacity : "<<v.capacity()<<endl;

    for (int i = 0; i < 5; i++)
    {
        int e;
        cout<<"Enter the element ";
        cin>>e;
        v.push_back(e);
    }
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout<<v[i]<<"  ";
    // }

    // for(int x:v){
    //     cout<<x<<"  ";
    // }
    // int x,position=-1;
    // cout<<"Enter x: ";
    // cin>>x;
    // for (int i = 0; i <v.size(); i++)
    // {
    //    if (v[i]==x)
    //    {
    //        position=i;
    //    }
        
    // }
    // cout<<"Poition: "<<position;

    // int y,count=0;
    // cout<<"Enter y: ";
    // cin>>y;
    // for (int i = 0; i <v.size(); i++)
    // {
    //    if (v[i]==y)
    //    {
    //        count++;
    //    }
        
    // }
    // cout<<"Count: "<<count;

    // int z,count=0;
    // cout<<"Enter z: ";
    // cin>>z;
    // for (int i = 0; i <v.size(); i++)
    // {
    //    if (v[i]>z)
    //    {
    //        count++;
    //    }
        
    // }
    // cout<<"Count: "<<count;

    // bool sorted = true;
    // for(int i=1;i<v.size();i++){
    //     if (v[i]<=v[i-1])
    //     {
    //         sorted=false;
    //         break;

        
    // }}
    // cout<<sorted;

    int sum=0;
    for (int i = 0; i < v.size(); i++)
    {
        if (i%2==0)
        {
           sum+=v[i];
        }
        else{
            sum-=v[i];
        }
    }
    
cout<<"The answer is: "<<sum;





    return 0;
}
