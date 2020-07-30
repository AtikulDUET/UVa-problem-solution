#include<bits/stdc++.h>
using namespace std;
int main()
{
    int h1,m1,h2,m2,init,finial;
    while(scanf("%d%d%d%d",&h1,&m1,&h2,&m2)!=EOF){
        if(h1==0&&m1==0&&h2==0&&m2==0)
            break;
        init = h1*60 + m1;
        finial = h2 * 60 + m2;
        if(init>finial){
            cout<<(1440-init)+finial<<endl;
        }
        else{
            cout<<finial-init<<endl;
        }
    }
    return 0;
}

