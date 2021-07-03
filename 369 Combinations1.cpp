#include<bits/stdc++.h>
#define ll long long int
using namespace std;

ll nCr(ll n,ll r){
    ll temp = 1;
    if(r>n-r)
        r = n-r;
    for(int i=1;i<=r;i++){
        temp*=(n-i+1);
        temp/=i;
    }
    return temp;
}
int main()
{
    ll n,r,ans;
    while(scanf("%lld%lld",&n,&r)!=EOF){
        if(n==0 && r==0)
            return 0;
         ans = nCr(n,r);
         cout<<n<<" things taken "<<r<<" at a time is "<<ans<<" exactly."<<endl;

    }
    return 0;
}

