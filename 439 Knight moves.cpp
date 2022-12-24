#include<bits/stdc++.h>
#define ll long long int
#define M 8
#define pii pair<int,int>
using namespace std;
int Dx[8]={-2,-2,-1,1,-1,1,2,2};
int Dy[]={1,1,2,2,-2,-2,-1,1};
int Grid[M][M], dis[8][8],vis[M][M];
int node,edge;

int bfs(int sx,int sy,int dx,int dy){
    memset(Grid,0,sizeof(Grid));
    memset(vis,0,sizeof(vis));

    memset(dis,0,sizeof(dis));
    queue<pii>q;
    q.push({sx,sy});
    dis[sx][sy] = 1;

     //cout<<sx<<" "<<sy<<" "<<dx<<" "<<dy<<endl;

    while(!q.empty()){
        pii U = q.front();
        q.pop();

        int xx = U.first , yy = U.second;
        if(xx==dx && yy==dy){
               // cout<<"Found: "<<endl;
            return dis[xx][yy];
        }

        for(int i=0;i<8;i++){
            int x =  xx + Dx[i], y = yy + Dy[i];

            if(x<0 || x>=M || y<0 || y>=M) continue;
            if(vis[x][y]==1){
                int temp = dis[xx][yy] + 1;
                if(dis[x][y]>temp)
                    dis[x][y] = temp;
            }
            else {
                dis[x][y] = dis[xx][yy] + 1;
                vis[x][y] = 1;
                q.push({x,y});
            }


        }

    }
    return dis[dx][dy];
}

int main()
{
    int sr,sc,dr,dc,ans1,ans2;
    string s1,s2;
    char ch1,ch2;

    while(cin>>s1>>s2){
            sc =(int)(s1[0]-'a'), dc = (int)(s2[0]-'a');
        sr =  s1[1]-'0'-1, dr = s2[1]-'0'-1;
      //  cout<<sr<<" "<<sc<<" "<<dr<<" "<<dc<<endl;
    //cout<<"ans: "<<bfs(sr-1,sc,dr-1,dc)-1<<endl;
    ans1 = bfs(sr,sc,dr,dc);
    ans2 = bfs(dr,dc,sr,sc);
    ans1 = min(ans1,ans2)-1;
        cout<<"To get from "<<s1<<" to "<<s2<<" takes "<<ans1<<" knight moves."<<endl;
    }
    return 0;
}

