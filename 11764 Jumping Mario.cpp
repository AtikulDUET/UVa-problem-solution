#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,arr[50],high,low,diff,t,cas=1;
    cin>>t;
    while(t--){
        high = 0, low = 0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++){
        diff = arr[i+1]-arr[i];
        if(diff==0) continue;
        else if(diff>0) high++;
        else low++;
    }
    cout<<"Case "<<cas++<<": "<<high<<" "<<low<<endl;
    }
    return 0;
}

