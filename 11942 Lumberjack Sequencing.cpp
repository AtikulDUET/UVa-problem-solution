#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[10],diff,cnt1,cnt2,t;
    cin>>t;
    cout<<"Lumberjacks:"<<endl;
    while(t--){
            cnt1=0,cnt2=0;
    for(int i=0;i<10;i++){
        cin>>arr[i];
    }
    for(int i=0;i<9;i++){
        diff = arr[i+1]-arr[i];
        if(diff>0){
            cnt1++;
        }
        else
            cnt2++;
    }
    if(cnt1==9 || cnt2==9)
        cout<<"Ordered"<<endl;
    else
        cout<<"Unordered"<<endl;
    }
    return 0;
}

