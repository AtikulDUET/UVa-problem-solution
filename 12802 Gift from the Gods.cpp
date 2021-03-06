#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n){
    if(n<2) return false;
    for(int i=2;i*i<=n;i++)
        if(n%i==0)
        return false;
    return true;
}
bool Palindrome(int n){
    int sum=0,rem,temp = n;
    while(n!=0){
        rem = n % 10;
        sum = sum *10 + rem;
        n /= 10;
    }
    if(temp==sum) return true;
    else
        return false;
}
int main()
{
    int  n,ck=0 ;
    while(scanf("%d",&n)!=EOF){
            if(ck==1)
            continue;
        if(isPrime(n)==1 && Palindrome(n)==1){
                cout<<2*n<<endl;
            ck = 1;
        }
        else{
            if(ck==0)
                cout<<n*2<<endl;
        }
    }

    return 0;
}


