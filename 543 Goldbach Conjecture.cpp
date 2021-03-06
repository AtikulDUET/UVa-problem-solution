#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n){
    if(n<=2)
        return false;
    for(int i=2;i*i<=n;i++){
        if(n%i==0)
            return false;
    }
    return true;
}
int main()
{
    int n,diff,ck,n1,n2;
    while(scanf("%d",&n)!=EOF){
        if(n==0)
            break;
            ck = 0;
        for(int i=n;i>sqrt(n);i--){
            if(isPrime(i)==1){
                diff = n-i;
                if(isPrime(diff)==1){
                    n1 = diff;
                    n2 = i;
                    ck = 1;
                    break;
                }
            }
        }
        if(ck==0)
            cout<<"Goldbach's conjecture is wrong."<<endl;
        else
            cout<<n<<" = "<<n1<<" + "<<n2<<endl;
    }
    return 0;
}

