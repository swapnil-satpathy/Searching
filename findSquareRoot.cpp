// Given an integer, we need to find floor of its square root.

#include <bits/stdc++.h>
using namespace std;

int findroot(int n){
    if(n==0 || n==1)
        return n;
    int start=1;
    int end=n;
    int ans;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(mid*mid==n)
            return mid;
        else if(mid*mid<n){
            start=mid+1;
            ans=mid; // This ans variable is because we have to give the floor of the square root of a number
        }
        else
        {
            end=mid-1;
        }
        
    }
    return ans;
}

int main(){
    int n;
    cin>>n;

    cout<<findroot(n)<<endl;


    return 0;
}