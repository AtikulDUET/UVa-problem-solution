#include<bits/stdc++.h>
#define ll long long int
using namespace std;
ll nCr(int n,int r){
    ll temp = 1;
    if(r < (n-r)){
        r = n - r;
    }
    for(int i=1;i<=r;i++){
        temp *= (n-i+1);
        temp/=i;
    }
    return temp;
}

int main()
{
    int n;
    ll ans;
    vector<int>vec;
    while(scanf("%d",&n)!=EOF){
        vec.push_back(n);
    }
    int sz = vec.size();
    for(int i=0;i<vec.size();i++){
        ans = nCr(2*vec[i],vec[i]);
        cout<<ans/(vec[i]+1)<<endl;
        if(i!= (sz-1))
            cout<<endl;
    }
    return 0;
}

