#include<bits/stdc++.h>
#define Size 1000000
using namespace std;
int divisor[Size+2];
int ans[Size+2];
void Divisor_Cnt(int n){
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j+=i)
            divisor[j]++;
    }
}
int main()
{
    int t,n,temp,Max=INT_MIN,ck;
    cin>>t;
    Divisor_Cnt(Size);
    for(int i=1;i<=Size;i++){
        temp = divisor[i];
        if(temp>=Max){
                Max = temp;
            ck = i;
            ans[i] = i;
        }
        else{
            ans[i] = ck;
        }
    }
    while(t--){
        cin>>n;
        cout<<ans[n]<<endl;
    }
    return 0;
}


