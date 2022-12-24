#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t,n,h,ta,td,value,cas=1;
    ll cnt;
    vector<int>vec;
    //freopen("aaaa.txt","w",stdout);
    cin>>t;

    while(t--){
        cin>>n>>h>>ta>>td;
        vec.clear();
        cnt = 0;
        for(int i=0;i<n;i++){
            cin>>value;
            vec.push_back(value);
        }
//        if(2*ta<=td){
//            cnt = ta*n;
//            cout<<"Case "<<cas++<<": "<<cnt<<endl;
//        }
//        else{
            sort(vec.begin(),vec.end());
            for(int i=n-1;i>=0;i--){
                if(vec[i]<h) break;
                else{
                    cnt+=ta;
                    vec.pop_back();
                }
            }

            int st=0,ed=vec.size()-1,temp,rem;
            while(st<=ed){
                if(st==ed){
                    cnt+=ta;
                    break;
                }
                temp = vec[st] + vec[ed];
                if(temp>=h){
                    cnt+=ta;
                    ed--;
                }
                else{
                    st++, ed--;
                    cnt+=td;

                }
            }

            if(ta*2 <= td){
                cnt = min(cnt,ta*n);
            }

            cout<<"Case "<<cas++<<": "<<cnt<<endl;
        }
    //}
    return 0;
}

