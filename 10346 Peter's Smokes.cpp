#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,sum,rem;
    while(scanf("%d%d",&n,&k)!=EOF){
            sum = n;
        while(n>=k){
            rem = n / k;
            sum = sum + rem;
            n = n % k + rem;
        }
        cout<<sum<<endl;
    }
    return 0;
}
