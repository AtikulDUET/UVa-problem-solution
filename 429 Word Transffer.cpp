#include<bits/stdc++.h>
using namespace std;
map<string,int>mp;
map<string,int>dis;
map<string,int>vis;
int cnt = 1;

int bfs(string src,string des){

    dis[src] = 0;
    queue<string>q;
    q.push(src);
    vis[src] = 1;
    string u,temp;
    while(!q.empty()){
        u = q.front();
        q.pop();
        if(u==des) return dis[des];

        for(int i=0;i<u.size();i++){
            temp = u;
            char c = u[i];
            for(char ch='a';ch<='z';ch++){
                if(ch==c) continue;
                temp[i] = ch;
                auto it = mp.find(temp);
                if(it!=mp.end()){
                    int c = dis[u] + 1;
                    if(vis[temp]){
                    if(dis[temp]>c)
                        dis[temp] = c;
                    }
                    else{
                        dis[temp] = c;
                        q.push(temp);
                    }
                }

                temp[i] = c;
            }
        }
    }
}



int main()
{
    int t;
    string str,src,des;
    cin>>t;

    while(t--){
    mp.clear();
    vis.clear();
    dis.clear();
    while(1){
        cin>>str;
        if(str=="*") break;
        mp[str] = cnt++;

    }

    for(auto it=mp.begin();it!=mp.end();it++){
        str = it->first;
        dis[str] = INT_MAX;
    }
    getchar();
    str.clear();
    while(getline(cin,str)){
        if(str.empty())
            break;
        src ="", des="";
        int i=0;
        for(;i<str.size();){
            if(str[i]==' '){
                i++;
                break;
            }
            else{
                src+=str[i];
                i++;
            }
        }

        for(;i<str.size();i++) des+=str[i];
       // cout<<"src: "<<src<<" des: "<<des<<endl;


        cout<<src<<" "<<des<<" "<<bfs(src,des)<<endl;
    }

    if(t) cout<<endl;
    }

    return 0;
}

