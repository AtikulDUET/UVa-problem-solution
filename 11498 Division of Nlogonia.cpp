#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,n,m,x,y,a,b;
    while(scanf("%d",&k)!=EOF){
        if(k==0)
            break;
        cin>>n>>m;
        for(int i=0;i<k;i++){
            cin>>x>>y;
            a = x - n; b = y - m;
            if(a>0 && b>0) cout<<"NE"<<endl;
            else if(a<0 && b>0) cout<<"NO"<<endl;
            else if(a<0 && b<0) cout<<"SO"<<endl;
            else if(a>0 && b<0) cout<<"SE"<<endl;
            else if(a==0 || b==0) cout<<"divisa"<<endl;
        }
    }
    return 0;
}

