#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,arr[3],cas=1;
    cin>>t;
    while(t--){
        for(int i=0;i<3;i++){
            cin>>arr[i];
        }
        sort(arr,arr+3);
        cout<<"Case "<<cas<<": "<<arr[1]<<endl;
        cas++;
    }
    return 0;
}

