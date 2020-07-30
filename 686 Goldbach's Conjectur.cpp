#include<bits/stdc++.h>
#define Size 10000007
using namespace std;
bitset<Size>bs;
vector<int>prime;
vector<int>::iterator it;
int cnt;
void sieve(int n){
    bs.set();
    bs[0] = bs[1] = false;
    prime.push_back(2);
    for(int i=3;i<=n;i+=2){
        if(bs[i]){
            for(int j=i*i;j<=n;j+=i)
                bs[j] = false;
            prime.push_back(i);
        }
    }
}

int Count(int n){
    int select,ck;
    cnt = 0;
    for(int i=0;prime[i]<=n+2;i++){
        select = n - prime[i];
        if(select < prime[i]) return cnt;
        it = find(prime.begin(),prime.end(),select);
        if(it!=prime.end())
            cnt++;
    }
    return cnt;
}

int main()
{
    int n;
    while(scanf("%d",&n)){
        if(n==0)    break;
        sieve(n);
        cout<<Count(n)<<endl;
        prime.clear();
    }
    return 0;
}



