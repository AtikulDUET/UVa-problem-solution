#include<bits/stdc++.h>
#define ll long long int
#define M 10005
using namespace std;
vector<int>G[M];
int vis[M+2],dis[M+2];
int node,edge,cnt,n1,n2;
map<int,int>mp;

void bfs(int src){
    memset(dis,-1,sizeof(dis));
    memset(vis,0,sizeof(vis));
    queue<int>q;
    q.push(src);
    dis[src] = 0;
    while(!q.empty()){
        int x = q.front();
        vis[x] = 1;
        q.pop();
        for(int i=0;i<G[x].size();i++){
            int v = G[x][i];
            int temp = dis[x] + 1;

          //  cout<<"For node: "<<v<<"  dis: "<<dis[x]+1<<endl;

            if(temp<dis[v] && vis[v]==1)
                dis[v] = temp;

            if(vis[v]==0){
                if(dis[v]>0){
                    temp = dis[x] + 1;
                    dis[v] = min(dis[v], temp);
                }
                else
                dis[v] = dis[x] + 1;

                q.push(v);
            }
        }
    }
}

int main()
{
    int n,st,ed,cas=1;
    set<int>s;
    //freopen("aaaa.txt","w",stdout);
    while(scanf("%d",&n)!=EOF){
        if(n==0)
            return 0;
            cnt = 1;
            s.clear(), mp.clear();
        for(int i=0;i<M;i++)
            G[i].clear();
        for(int i=0;i<n;i++){
            int u,v;
            cin>>u>>v;
            if(mp[u]==0)
                mp[u] = cnt++;
            if(mp[v]==0)
                mp[v] = cnt++;
            n1 = mp[u], n2 = mp[v];
            s.insert(n1);
            s.insert(n2);
            G[n1].push_back(n2);
            G[n2].push_back(n1);
        }

        while(scanf("%d%d",&st,&ed)!=EOF){
            if(st==0 && ed==0)
                break;
            bfs(mp[st]);
            int ans = 0;
            for(auto it=s.begin();it!=s.end();it++){
                int temp = *it;
                n1 = mp[temp];
              // cout<<"node: "<<temp<<"  dis: "<<dis[temp]<<endl;

                if(dis[temp] > ed || dis[temp]==-1)
                    ans++;
            }
            cout<<"Case "<<cas++<<": "<<ans<<" nodes not reachable from node "<<st<<" with TTL = "<<ed<<"."<<endl;
        }
    }
    return 0;
}

