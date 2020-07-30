#include<bits/stdc++.h>
#define ll long long
#define Lim 100000006
using namespace std;
int cnt;
bool flag[Lim];
vector<ll>prime;
vector<ll>co_prime;
void sieve(ll n){
    for(ll i=4;i<=n;i+=2) flag[i] = true;
    for(ll i=3;i*i<=n;i+=2){
        if(flag[i]==false){
            for(ll j=i*i;j<=n;j+=i)
                flag[j] = true;
        }
    }
    for(ll i=2;i<=n;i++){
        if(flag[i]==false){
            prime.push_back(i);
        }
    }
    co_prime.push_back(0);
    for(ll i=0;i<prime.size();i++){
        int diff = prime[i+1] - prime[i];
        if(diff == 2){
            co_prime.push_back(prime[i]);
            co_prime.push_back(prime[i+1]);
        }
    }
}
int main()
{
    int n;
    sieve(19000000);
    while(scanf("%d",&n)!=EOF){
        cout<<"("<<co_prime[2*n-1]<<", "<<co_prime[2*n]<<")"<<endl;
    }
    return 0;
}


