#include<bits/stdc++.h>
#define ll long long int
#define Sz 1000006
using namespace std;
int A[Sz] ,temp[500005];
ll ans;

void Merge_Sort(int st,int ed){
    if(st==ed){
        return;
    }

    int mid =(st+ed)/2;

    Merge_Sort(st,mid);
    Merge_Sort(mid+1,ed);

    int i=st,j=mid+1,k=0;

    while(i<=mid && j<=ed){
        if(A[i] <= A[j]){
            temp[k++] = A[i++];
        }
        else{
            temp[k++] = A[j++];
            ans+=(mid-i+1);
        }
    }

    for(;i<=mid;i++) temp[k++] = A[i];
    for(;j<=ed;j++)   temp[k++] = A[j];

    for(int i=st,k=0;i<=ed;i++,k++)
        A[i] = temp[k];

}

int main()
{
    int n;
    //freopen("1aaaa.txt","w",stdout);
    while(1){
            cin>>n;
        if(n==0) return 0;

        for(int i=0;i<n;i++)
            cin>>A[i];
            ans = 0;

        Merge_Sort(0,n-1);
//        for(int i=0;i<n;i++)
//            cout<<A[i]<<"   ";
//        cout<<endl;

        cout <<ans<<endl;
    }
    return 0;
}
