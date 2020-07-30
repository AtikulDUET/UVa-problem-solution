#include<bits/stdc++.h>
using namespace std;
int main()
{
    multimap<string,int>m;
    multimap<string,int>::iterator it;
    char str[16];
    int dd,mm,yy,total,n,ck,Max=0,Min;
    cin>>n;
    for(int i=0;i<n;i++){
    cin>>str;
    cin>>dd>>mm>>yy;
    total = dd+mm*30+yy*365;
    m.insert(make_pair(str,total));
    }
    it = m.begin();
    Min = it->second;
    for(it=m.begin();it!=m.end();it++){
         if(Max <it->second){
            Max = it->second;
         }
    }
        for(it=m.begin();it!=m.end();it++){
             if(Min>it->second){
                Min = it->second;
             }

        }
         for(it=m.begin();it!=m.end();it++){
            if(it->second==Max)
                cout<<it->first<<endl;
         }
        for(it=m.begin();it!=m.end();it++){
            if(it->second==Min)
                cout<<it->first<<endl;
         }

    return 0;
}

