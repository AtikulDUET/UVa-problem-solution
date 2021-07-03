#include<bits/stdc++.h>
#define Size 100
#define ll long long int
using namespace std;
ll Pas[Size+1][Size+1];
void Pascal(){
    Pas[0][0] = 1;
    for(int i=1;i<=Size;i++){
        Pas[i][0] = 1;
        for(int j=1;j<=i;j++)
            Pas[i][j] = Pas[i-1][j] + Pas[i-1][j-1];
    }
}

int main()
{
    int n,m;
    Pascal();
    while(scanf("%d%d",&n,&m)!=EOF){
        if(n==0 && m==0)
            break;
        cout<<n<<" things taken "<<m<<" at a time is "<<Pas[n][m]<<" exactly."<<endl;

    }
    return 0;
}

