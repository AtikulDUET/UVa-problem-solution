#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,temp;
    while(scanf("%lld%lld",&a,&b)!=EOF){
        if(b>a){
            temp = a;
            a = b;
            b = temp;
        }
        cout<<a-b<<endl;
    }
    return 0;
}

