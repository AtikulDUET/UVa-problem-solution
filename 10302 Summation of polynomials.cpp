#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,sum=0;
    while(scanf("%lld",&n)!=EOF){
        sum = (n*n*(n+1)*(n+1)/4);
        cout<<sum<<endl;

    }
    return 0;
}

