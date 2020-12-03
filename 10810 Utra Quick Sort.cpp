#include<bits/stdc++.h>
#define ll long long int
#define Size 500007
using namespace std;
ll arr[Size],temp[Size];
ll cnt;
void Merge_Sort(ll arr[],int start,int end){
    if(start==end)
        return;
    int mid = (start+end)/2;
    Merge_Sort(arr,start,mid);
    Merge_Sort(arr,mid+1,end);
    int i=start,j=mid+1,k=0;
    while(i<=mid && j<=end){
        if(arr[i]<=arr[j])
            temp[k++] = arr[i++];
        else{
            cnt +=(mid-i+1);
            temp[k++] = arr[j++];
        }
    }
    for(;i<=mid;i++)
        temp[k++] = arr[i];
    for(;j<=end;j++) temp[k++] = arr[j];
    for(int i=start,j=0;i<=end;i++)
        arr[i] = temp[j++];
}
int main()
{
    ll n;
    while(scanf("%lld",&n)){
        if(n==0)
            break;
        memset(arr,0,sizeof(arr));
        for(int i=0;i<n;i++)
            cin>>arr[i];
        cnt=0;
        Merge_Sort(arr,0,n-1);
        cout<<cnt<<endl;
    }
    return 0;
}

