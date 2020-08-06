#include <bits/stdc++.h>
using namespace std;

// Peak Element is the element which is greater than both of its left and right side element

// The very important property is that if arr[mid-1]>=arr[mid], then the peak element always lies on the left half
// Otherwise it lies on the right half


int findPeak(int *arr,int n){
    int low=0;
    int high=n-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if((mid==0 || arr[mid]>=arr[mid-1]) && (mid==n-1 || arr[mid]>=arr[mid+1]))
            return mid;
        if(mid>0 && arr[mid-1]>=arr[mid])
            high=mid-1;
        else
        {
            low=mid+1;
        }
        
    }
    return -1;
}

int main(){

    int n;
    cin>>n;
    int *arr=new int[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];

    cout<<findPeak(arr,n)<<endl;
    

    delete [] arr;



    return 0;
}