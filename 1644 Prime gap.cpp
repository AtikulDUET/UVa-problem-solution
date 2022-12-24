#include<bits/stdc++.h>
#define M 10000000
using namespace std;
bool flag[M+3];
vector<int>prime;

void Sieve(){
    prime.push_back(2);

    for(int i=3;i*i<=M;i+=2){
        if(flag[i]==0){
            for(int j=i*i;j<=M;j+=i)
                flag[j] = 1;
        }
    }
    for(int i=3;i<=M;i+=2){
        if(flag[i]==0) prime.push_back(i);
    }
}

int main()


{
    Sieve();
//    for(int i=0;i<10;i++)
//        cout<<prime[i]<<" ";
//    cout<<endl;
//    cout<<"Siz: "<<prime.size()<<endl;
    int n;
    while(1){
        cin>>n;
        if(n==0) return 0;

        int idx = lower_bound(prime.begin(),prime.end(),n)-prime.begin();
        if(prime[idx]==n) cout<<0<<endl;
        else{
            cout<<prime[idx]-prime[idx-1]<<endl;
        }

    }
    return 0;
}

