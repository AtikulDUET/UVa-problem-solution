#include<bits/stdc++.h>
using namespace std;
bool Prime(int n){
    if(n<2) return false;
    for(int i=2;i*i<=n;i++){
        if(n%i==0)
            return false;
    }
    return true;
}
int Reverse(int n){
    int sum = 0,rem;
    while(n!=0){
        rem = n % 10;
        sum = sum * 10 + rem;
        n = n / 10;
    }
    return sum;
}
int main()
{
    int n,a,b,temp;
    while(scanf("%d",&n)!=EOF){
            temp = n;
    a = Prime(n);
    n = Reverse(n);
    b = Prime(n);
    if(a==0)
        cout<<temp<<" is not prime."<<endl;
    else if((a==1 && b!=1)|| temp==n)
        cout<<temp<<" is prime."<<endl;
    else
        cout<<temp<<" is emirp."<<endl;
    }
    return 0;
}

