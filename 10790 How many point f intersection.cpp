#include<bits/stdc++.h>
#define ll unsigned long long int
#define pii pair<int,int>
#define el "\n"
#define Pb push_back
#define Mp make_pair
#define M 10000
using namespace std;
ll n,value,t,a,b,cas=1;
vector<int>vec;
map<int,int>mp;

int main()
{
    while(1){
        cin>>a>>b;
        if(a==0 && b==0) return 0;
        a = a*(a-1)/2;
        b = b*(b-1)/2;
        cout<<"Case "<<cas++<<": "<<a*b<<endl;
    }
    return 0;
}

