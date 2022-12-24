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

int  Calculate(int n){
    int cnt = 0;
    while(n%2==0){
        n/=2;
        cnt++;
    }
    for(int i=3;i*i<=n;i+=2){
        if(n%i==0){
            while(n%i==0){
                n/=i;
                cnt++;
            }
        }
    }
    if(n>1)
        cnt++;
    return cnt;

}

int main()
{
    mp[1] = 0;
    for(int i=2;i<=1000000;i++){
        mp[i] = Calculate(i);
        mp[i] = mp[i] + mp[i-1];
    }
    while(scanf("%d",&n)!=EOF){
        cout<<mp[n]<<endl;
    }
    return 0;
}

