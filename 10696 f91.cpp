#include<bits/stdc++.h>
using namespace std;
int f91(int n){
    if(n<=100){
            n = f91(n+11);
        n = f91(n);
    }
    if(n>=101)
     n = n - 10;
     return n;
}
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF){
        if(n==0)
            break;
        cout<<"f91("<<n<<") = "<<f91(n)<<endl;
    }
    return 0;
}

