#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,arr[12],mid,cas=1;
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=0;i<n;i++)
            cin>>arr[i];
        mid = (0+n)/2;
        sort(arr,arr+n);
        cout<<"Case "<<cas++<<": "<<arr[mid]<<endl;
    }
    return 0;
}



