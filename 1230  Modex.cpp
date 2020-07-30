#include<bits/stdc++.h>
using namespace std;
int big_mod(int x,int y,int m){
   if(y==0) return 1 %m;
   int a = big_mod(x,y/2,m);
   a = (a*a)%m;
   if(y%2==1)
    a = (a*x)%m;
   return a;
}
int main()
{
    int x,y,m,t;
    while(1){
    cin>>t;
    if(t==0) return 0;
    else{
    while(t--){
    cin>>x>>y>>m;
    cout<<big_mod(x,y,m)<<endl;
    }
    }
    }
    return  0;
}

