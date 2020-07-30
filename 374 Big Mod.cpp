#include<bits/stdc++.h>
using namespace std;
int bigMod(int B,int P,int M){
    long long x;
    if(P==0)
        return 1 % M;
    x = bigMod(B,P/2,M);
    x = (x*x)%M;
    if(P%2==1)
        x = (x*B)%M;
    return x;
}
int main()
{
    int b,p,m;
    while(scanf("%d%d%d",&b,&p,&m)!=EOF){
    cout<<bigMod(b,p,m)<<endl;
    }
    return 0;
}

