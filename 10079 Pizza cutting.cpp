#include<bits/stdc++.h>
#define ll long long int
#define pii pair<int,int>
#define el "\n"
#define Pb push_back
#define Mp make_pair
#define M 10000
using namespace std;
ll n,value,t;
vector<int>vec;
map<int,int>mp;

int main()
{
    while(1){
        cin>>n;
        if(n<0) break;
        n = n*(n+1)/2;
        cout<<n+1<<endl;
    }
    return 0;
}

