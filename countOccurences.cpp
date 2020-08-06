//Given a sorted array and an element x, we need to count occurrences of x in the array.

//Given a sorted array with repetition and an element x, we need to find index of first occurrence of x.

// The technique we will be using is that we will be finding the rightmost index of the element and the leftmost index of the element
// Number of Occurences= RightMost index- LeftMost Index+1


// An extension to this problem is to find the number of ones in a sorted binary Array.

#include <bits/stdc++.h>
using namespace std;

int leftmost_index(int *arr,int l,int r,int x){
    while(l<=r){
        int mid=l+(r-l)/2;
        if(arr[mid]==x && (mid==0 || arr[mid-1]!=x))
            return mid;
        else if(arr[mid]>=x)
            r=mid-1;
        else
        {
            l=mid+1;
        }
        
    }
    return -1;
}

int rightmost_index(int *arr,int l,int r,int x){
    while(l<=r){
        int mid=l+(r-l)/2;
        if(arr[mid]==x && (mid==r || arr[mid+1]!=x))
            return mid;
        else if(arr[mid]>x)
            r=mid-1;
        else
        {
            l=mid+1;
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

int x;
cin>>x;
int rightmost=rightmost_index(arr,0,n-1,x);
int leftmost=leftmost_index(arr,0,n-1,x);


if(leftmost==-1 && rightmost==-1)
    cout<<0<<endl;
else
    cout<<rightmost-leftmost+1<<endl;

delete [] arr;


return 0;
}