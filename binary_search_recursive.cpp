#include <bits/stdc++.h>
using namespace std;

int binary_search(int *arr,int l,int r,int x){
    if(l>r)
        return -1;
    int mid=l+(r-l)/2;
    if(arr[mid]==x)
            return mid;
    else if(arr[mid]>x)
        return binary_search(arr,l,mid-1,x);
    else
        return binary_search(arr,mid+1,r,x);
   
    
}

int main(){
int n;
cin>>n;
int *arr=new int[n];
for(int i=0;i<n;i++)
    cin>>arr[i];

int x;
cin>>x;
cout<<binary_search(arr,0,n-1,x)<<endl;


delete [] arr;


return 0;
}