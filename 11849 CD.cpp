#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,value,cnt;
    set<int>Jack;
    set<int>::iterator it;
    while(scanf("%d%d",&n,&m)!=EOF){
            cnt=0;
            Jack.clear();
        if(n==0 && m==0) break;
        for(int i=0;i<n;i++){
            cin>>value;
            Jack.insert(value);
        }
        for(int i=0;i<m;i++){
            cin>>value;
             it = Jack.find(value);
             if(it!=Jack.end())
                cnt++;
        }
        cout<<cnt<<endl;

    }
    return 0;
}


