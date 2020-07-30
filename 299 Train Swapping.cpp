#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[100],n,temp,count,t;
    cin>>t;
    while(t--){
        count=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=1;i<n;i++){
        for(int j=0;j<n-i;j++){
            if(arr[j+1]<arr[j]){
                count++;
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    cout<<"Optimal train swapping takes "<<count<<" swaps."<<endl;
    }
    return 0;
}

