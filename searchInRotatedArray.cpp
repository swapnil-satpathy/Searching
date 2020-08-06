#include <bits/stdc++.h>
using namespace std;

// If you see the middle element, then everytime one half is always sorted...

int search(int *arr,int n,int x){
    int low=0;
    int high=n-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]==x)
            return mid;
        if(arr[low]<arr[mid]) //Left Half is sorted...
        {
            if(x>=arr[low] && x<arr[mid]) 
                high=mid-1;
            else
            {
                low=mid+1;
            }
        }
        else{
            if(x>arr[mid] && x<=arr[high])
                low=mid+1;
            else
            {
                high=mid-1;
            }
            
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
    cout<<search(arr,n,x)<<endl;

    delete [] arr;
    

    return 0;

}