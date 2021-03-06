#include<bits/stdc++.h>
#define ll long long int
#define Mod 1000003
using namespace std;

ll nCr(int n,int r){
    ll p =1, k = 1,m;
    if(n-r<r)
        r = n-r;
    if(r!=0){
            while(r){
        p = (p*n)%Mod;
        k = (k*r)%Mod;
        m = __gcd(p,k);
        p /= m;
        k /= m;
        n--, r--;
        }
    }
    else
        p = 1;
    return p%Mod;
}
int main()
{
    int t,n,r,cas = 1;
    cin>>t;
    while(t--){
        cin>>n>>r;
        cout<<"Case "<<cas++<<": "<<nCr(n,r)<<endl;
    }
    return 0;
}

