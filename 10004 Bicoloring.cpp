#include<bits/stdc++.h>
#define M 205
using namespace std;
vector<int>G[M];
int vis[M+2];
bool col[M+2];
int node,edge;
bool ck;
void dfs(int u,int c){
    col[u] = c;
    vis[u] = 1;
    for(int i=0;i<G[u].size();i++){
        int v = G[u][i];
        if(vis[v]==1){
            if(col[u]==col[v]){
                ck = 1;
                return;
            }
        }
        if(vis[v]==0){
            dfs(v,!c);
        }
    }
}


int main()
{
    while(1){
    cin>>node;
        if(node==0)
            return 0;
        else{
        cin>>edge;
        for(int i=0;i<node;i++)
            G[i].clear();

        memset(vis,0,sizeof(vis));
        ck = 0;
        for(int i=0;i<edge;i++){
            int u,v;
            cin>>u>>v;
            G[u].push_back(v);
            G[v].push_back(u);
        }
        dfs(0,0);
        if(ck==1)
            cout<<"NOT BICOLORABLE."<<endl;
        else
            cout<<"BICOLORABLE."<<endl;
        }
    }
    return 0;
}

