#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,total;
    while(scanf("%d",&n)!=EOF){
            total = 0;
    if(n==0)
        break;
        for(int i=1;i<=n;i++){
            total = total + i*i;
        }
    cout<<total<<endl;
    }
    return 0;
}

