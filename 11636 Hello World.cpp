#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,cnt,i,cas=1;
    while(scanf("%d",&n)!=EOF){
            cnt=0,i=1;
            if(n<0)
                break;
         while(i<n){
            cnt++;
            i+=i;
         }
        cout<<"Case "<<cas++<<": "<<cnt<<endl;
    }
    return 0;
}

