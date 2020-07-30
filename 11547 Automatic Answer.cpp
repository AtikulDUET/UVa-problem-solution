#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,Final;
    cin>>t;
    while(t--){
        cin>>n;
        Final = ((((((n*567)/9)+7492)*235)/47)-498);
        cout<<abs((Final/10)%10)<<endl;
    }
    return 0;
}

