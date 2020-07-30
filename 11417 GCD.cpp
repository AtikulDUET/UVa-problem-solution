#include<bits/stdc++.h>
using namespace std;
int GCD(int a,int b){
    if(b==0)
        return a;
    return GCD(b,a%b);
}
int main()
{
    int n,sum;
    while(scanf("%d",&n)!=EOF){
        sum = 0;
            if(n==0)
            break;
    for(int i=1;i<=n;i++){
        for(int j=i+1;j<=n;j++){
            sum = sum + GCD(i,j);
        }
    }
    cout<<sum<<endl;
    }
    return 0;
}

