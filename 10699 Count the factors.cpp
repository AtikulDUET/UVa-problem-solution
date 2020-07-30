#include<bits/stdc++.h>
#define Lim 1000000
using namespace std;
vector<int>prime;
bool flag[Lim];
int List[100];
int Size;
void sieve(int n){
    for(int i=4;i<=n;i+=2) flag[i] = true;
     for(int i=3;i*i<=n;i+=2){
        if(flag[i]==false){
            for(int j=i*i;j<=n;j+=i)
                flag[j] = true;
        }
     }
     for(int i=2;i<n;i++){
        if(flag[i]==false)
            prime.push_back(i);
     }
}
void Prime_factor(int n){
    sieve(n);
    Size=0;
    for(int i=0;prime[i]*prime[i]<=n+1;i++){
        if(n%prime[i]==0){
            List[Size++]=prime[i];
            while(n%prime[i]==0){
                n/=prime[i];
            }
        }
        if(n>1)
           List[Size]=n;
    }
}
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF){
        if(n==0) break;
        Prime_factor(n);
   cout<<n<<" : "<<Size+1<<endl;
    memset(List,0,sizeof(List));
    }
    return 0;
}


