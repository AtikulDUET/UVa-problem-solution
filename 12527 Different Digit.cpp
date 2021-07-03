#include<bits/stdc++.h>
using namespace std;
int cnt[10];

bool Check(int n){
    memset(cnt,0,sizeof(cnt));
    int rem;
    while(n!=0){
        rem = n % 10;
        if(cnt[rem]==1)
            return 0;
        cnt[rem] = 1;
        n/=10;
    }
    return 1;
}

int main()
{
    int N,M,cnt;
    while(scanf("%d%d",&N,&M)!=EOF){
            cnt = 0;
        for(int i=N;i<=M;i++){
            if(Check(i)==1)
                cnt++;
        }
    cout<<cnt<<endl;
    }
    return 0;
}

