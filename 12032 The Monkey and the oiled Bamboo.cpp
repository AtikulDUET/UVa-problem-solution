#include<bits/stdc++.h>
#define ll long long int
#define el "\n"
#define Pb push_back
#define Mp make_pair
using namespace std;

int n,value,t;
vector<int>vec;
map<int,int>mp;

bool isValid(int jump){

    for(int i=1;i<=n;i++){
        int diff = vec[i]-vec[i-1];
        if(diff==jump) jump-=1;
        else if(diff>jump) return false;
    }
    return true;
}


int BS(int lo,int hi){
    int  mid,ans=lo;
    //cout<<"lo: "<<lo<<" hi: "<<hi<<endl;
    while(lo<=hi){
        mid = (lo+hi)/2;
        //cout<<"mid: "<<mid<<" lo: "<<lo<<"  hi: "<<hi<<endl;
        if(isValid(mid)){
            ans = mid;
            hi = mid-1;
        }
        else
           lo = mid + 1;

    }
    return ans;
}

int main()
{
    int cas=1,lo;
    cin>>t;
    while(t--){
        cin>>n;
        vec.clear();
        vec.push_back(0);
        for(int i=0;i<n;i++){
            cin>>value;
            vec.push_back(value);
        }
        lo = 0;
        for(int i=1;i<=n;i++){
            int diff = vec[i]-vec[i-1];
            lo = max(lo,diff);
        }

        int hi = (vec[n]-vec[1]) +2;

        cout<<"Case "<<cas++<<": "<<BS(lo,hi)<<endl;
    }
    return 0;
}

