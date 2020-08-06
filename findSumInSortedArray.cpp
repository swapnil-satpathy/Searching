#include <bits/stdc++.h>
using namespace std;

// The array should be sorted...
// Two Pointer Approach

// 0(n) time
// 0(1) space

void findsum(int *arr, int n,int sum){
    int left=0;
    int right=n-1;
    while(left<=right){
        int temp=arr[left]+arr[right];
        if(temp==sum){
            cout<<left<<" "<<right<<endl;
            return;
        }
        else if(temp<sum)
            left++;
        else
        {
            right--;
        }
        
    }
}

int main(){
    int n;
    cin>>n;
    int *arr=new int[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];

    int sum;
    cin>>sum;
    findsum(arr,n,sum);
    delete [] arr;

    return 0;

}