#include<bits/stdc++.h>
#define LIM 20004
#define INF 10e9+7
using namespace std;
vector<int>G[LIM],W[LIM];
int keys[LIM];
int node,edge,S,T;
struct info{
    int x,y;
    info(int xx,int yy){
        x = xx, y = yy;
    }
    bool operator < (const info &ob)const{
        return y > ob.y;
    }
};


int Dijstra(int st,int ed){
    for(int i=0;i<=node;i++)
        keys[i] = INF;
    keys[st] = 0;
    priority_queue<info>pq;
    pq.push({st,0});

    while(!pq.empty()){
        info temp = pq.top();
        pq.pop();
        int u = temp.x;
        if(u==ed)
            return keys[u];
        for(int i=0;i<G[u].size();i++){
            int v = G[u][i];
            int w = W[u][i];
            if(keys[v] > keys[u]+w){
                keys[v] = keys[u] + w;
                pq.push({v,keys[v]});
            }
        }
    }
    return -1;
}

int main()
{
    int t,cas=1,temp;
    cin>>t;
    while(t--){
        cin>>node>>edge>>S>>T;
        for(int i=0;i<node;i++){
            G[i].clear();
            W[i].clear();
        }
        for(int i=0;i<edge;i++){
            int x,y,w;
            cin>>x>>y>>w;
            G[x].push_back(y);
            G[y].push_back(x);
            W[x].push_back(w);
            W[y].push_back(w);
        }
        temp = Dijstra(S,T);
        if(temp==-1)
            cout<<"Case #"<<cas++<<": unreachable"<<endl;
        else
            cout<<"Case #"<<cas++<<": "<<temp<<endl;
    }
    return 0;
}

