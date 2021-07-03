#include<bits/stdc++.h>
using namespace std;
int Ex_Euclid(int a,int b,int &x,int &y){
    if(b==0){
        x = 1, y = 0;
        return a;
    }
    int x1,y1;
    int d = Ex_Euclid(b,a%b,x1,y1);
    x = y1;
    y = x1 - y1*(a/b);
    return d;
}
int main()
{
    int x,y,a,b;
    while(scanf("%d%d",&a,&b)!=EOF){
        int ans = Ex_Euclid(a,b,x,y);
        cout<<x<<" "<<y<<" "<<ans<<endl;
    }
    return 0;
}

