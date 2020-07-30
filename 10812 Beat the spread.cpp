#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    ll n1,n2,a,b;
    cin>>t;
    while(t--){
        cin>>n1>>n2;
        if(n2>n1 || (n1+n2)%2==1) cout<<"impossible"<<endl;
        else{
        a = (n1+n2)/2;
        b = n1 - a;
        cout<<a<<" "<<b<<endl;
        }
    }
    return 0;
}

