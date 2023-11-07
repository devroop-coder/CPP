#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;

    // v.push_back(1);
    // v.push_back(2);
    // v.push_back(3);
    // v.push_back(4);
    // v.push_back(5);
    // // 1 2 3 4 5 
    // int left = 0, right = v.size() - 1;

    // while (left<right)
    // {
    //     if(v[left]%2==1 && v[right]%2==0){
    //         swap(v[left],v[right]);
    //         right --;
    //         left ++;


    //     }
    //     if(v[left]%2==0)
    //     {
    //         left ++;
    //     }
    //     if(v[right]%2==1)
    //     {
    //         right ++;
    //     }
    // }

    // for(int i = 0; i < 5; i ++){
    //     cout<<v[i]<<"  ";

    // }
    int n;
    cout<<"Enter no of element: ";

    cin>>n;
    cout<<"Enter elements : ";

    for (int i = 0; i < n; i++)
    {
        int ele;
        cin>> ele;
        v.push_back(ele);

    }

    for(int i=1;i<n;i++){
        v[i]+=v[i-1];
    }





    
    for (int i = 0; i < n; i++)
    {
        cout<<v[i]<< " ";

    }
    



    return 0;
}
