#include<bits/stdc++.h>
#define ll long long
#define Size 10000007
using namespace std;
bitset<Size>bs;
vector<ll>prime;
void Sieve(int n){
    bs.set();
    bs[0]=bs[1] = false;
    prime.push_back(2);
    for(ll i = 3;i<=n;i+=2){
        if(bs[i]){
            for(ll j=i*i;j<=n;j+=i)
                bs[j] = false;
            prime.push_back(i);
        }
    }
}
void prime_factorize(ll n){
    for(int i=0;prime[i]*prime[i]<=n;i++){
        if(n%prime[i]==0){
            while(n%prime[i]==0){
                cout<<"    "<<prime[i]<<endl;
                n/=prime[i];
            }
        }
    }
    if(n>1)
        cout<<"    "<<n<<endl;
}
int main()
{
    ll n;
    Sieve(Size);
    while(scanf("%lld",&n)){
        if(n<0) break;
        prime_factorize(n);
        cout<<endl;
    }
    return 0;
}

