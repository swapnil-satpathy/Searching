#include <bits/stdc++.h>
using namespace std;
// Majority Element is the element that appears more than n/2 times in an array...
// Moore's Voting Algorithm
// 0(n) time
// 0(1) space

int findmajority(int *arr,int n){
    int res=0;
    int count=1;
    for(int i=1;i<n;i++){
        if(arr[res]==arr[i])
            count++;
        else
        {
            count--;
        }
        if(count==0) {res=i;count=1;}
    }
    count=0;
    //cout<<"The res is"<<res<<endl;
    // Just to check whether the res we have found is majority or not...
    for(int i=0;i<n;i++){
        if(arr[res]==arr[i])
            count++;
       

    }
     if(count<=n/2)
            res=-1;
        return res;
    }



int main(){

    int n;
    cin>>n;
    int *arr=new int[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<findmajority(arr,n)<<endl;
    return 0;
}