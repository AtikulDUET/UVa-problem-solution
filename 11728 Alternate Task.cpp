#include<bits/stdc++.h>
using namespace std;
int Divisor_Sum(int n){
    int total = 0;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            total+=i;
            if(i*i!=n){
                total +=(n/i);
            }
        }
    }
    return total;
}
int main()
{
    int n,ck,temp,cas=1;
    while(scanf("%d",&n)!=EOF){
        if(n==0)
            break;
        ck = 0;
    temp=0;
        for(int i=n;i>=1;i--){
            temp = Divisor_Sum(i);

            if(temp==n){
                temp = i;
                ck = 1;
                break;
            }
        }
        if(ck==1)
            cout<<"Case "<<cas++<<": "<<temp<<endl;
        else
            cout<<"Case "<<cas++<<": -1"<<endl;
    }
    return 0;
}

