#include<bits/stdc++.h>
#define ll long long int
#define pii pair<int,int>
#define el "\n"
#define Pb push_back
#define Mp make_pair
using namespace std;

int n,value,t;
vector<int>vec;
map<int,int>mp;
int Eular_Phi(int n){
    int ans = n;
    if(n%2==0){
        ans-=(ans/2);
        while(n%2==0){
            n/=2;
        }
    }
    for(int i=3;i*i<=n;i+=2){
        if(n%i==0){
            ans-=(ans/i);
            while(n%i==0){
                n/=i;
            }
        }
    }
    if(n>1){
        ans -= (ans/n);
    }
    return ans;
}
int main()
{
    while(1){
        cin>>n;
        if(n==0) break;
        value = Eular_Phi(n);
        cout<<value<<endl;

    }

    return 0;
}

