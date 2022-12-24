#include<bits/stdc++.h>
#define ll long long int
#define pii pair<int,int>
#define el "\n"
#define Pb push_back
#define Mp make_pair
#define M 10000
using namespace std;
int n,value,t,m;
vector<int>Adj[M],vec;
int ind[M];

map<int,int>mp;
queue<int>q;

void dfs(){

    while(!q.empty()){
        int x = q.front();
        vec.push_back(x);
        q.pop();

        for(int i=0;i<Adj[x].size();i++){
            int v = Adj[x][i];
            ind[v]--;
            if(ind[v]==0)
                q.push(v);
        }
    }


}

int main()
{
    while(1){
        cin>>n>>m;
        if(n==0 && m==0) return 0;

        for(int i=1;i<=n;i++) Adj[i].clear();
        while(!q.empty()) q.pop();

        vec.clear();
        for(int i=0;i<m;i++){
            int u,v;
            cin>>u>>v;
            Adj[u].push_back(v);
            ind[v]++;
        }

        for(int i=1;i<=n;i++){
            if(ind[i]==0)
                q.push(i);
        }

        dfs();

        for(int i=0;i<vec.size();i++){
            if(i!=0) cout<<" ";
            cout<<vec[i];
        }
        cout<<endl;

    }
    return 0;
}

