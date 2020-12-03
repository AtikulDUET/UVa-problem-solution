#include<bits/stdc++.h>
#define Size 500000
using namespace std;
bool flag[Size+5];
vector<int>prime;
vector<int>li;
void sieve(){
     prime.push_back(2);
     for(int i=3;i*i<=Size;i+=2){
        if(flag[i]==false){
            for(int j=i*i;j<=Size;j+=i)
                flag[j] = true;
        }
     }
     for(int i=3;i<=Size;i+=2){
        if(flag[i]==false)
            prime.push_back(i);
     }
}
void Prime_Factorize(int n){
    for(int i=0;prime[i]*prime[i]<=n+2;i++){
        if(n%prime[i]==0){
            while(n%prime[i]==0){
                li.push_back(prime[i]);
                n/=prime[i];
            }
        }
    }
    if(n>1)
        li.push_back(n);
}
int main()
{
    int n;
    sieve();
    while(scanf("%d",&n)!=EOF){
        if(n==0) break;
        if(n<0){
                cout<<n<<" = "<<"-1 x ";
            n = n*-1;
        }
        else
            cout<<n<<" = ";
        Prime_Factorize(n);
        for(int i=0;i<li.size();i++){
                if(i!=0)    cout<<" x ";
        cout<<li[i];
        }
        cout<<endl;
        li.clear();
    }
    return 0;
}

