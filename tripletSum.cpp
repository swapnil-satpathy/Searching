#include <bits/stdc++.h>
using namespace std;


// Two Pointer Approach

// 0(n*n) time
// 0(1) space

bool findsum(int *arr, int i,int n,int sum){
    int left=i;
    int right=n;
    while(left<=right){
        int temp=arr[left]+arr[right];
        if(temp==sum){
            
            return true;
        }
        else if(temp<sum)
            left++;
        else
        {
            right--;
        }
        
    }
    return false;
}

int main(){
    int n;
    cin>>n;
    int *arr=new int[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];

    int sum;
    cin>>sum;

    sort(arr,arr+n);
    int flag=0;
    for(int i=0;i<n;i++){
        if(findsum(arr,i+1,n-1,sum-arr[i])==true)
                {flag=1;
                break;}
        

    }
    if(flag==1)
        cout<<true<<endl;
    else
    {
            cout<<false<<endl;
    }
    
    delete [] arr;

    return 0;

}