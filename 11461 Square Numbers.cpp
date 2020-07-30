#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,temp,cnt;
    while(scanf("%d%d",&a,&b)!=EOF){
            cnt = 0;
        if(a==0 && b==0)
            break;
        for(int i=a;i<=b;i++){
            temp = sqrt(i);
            if(temp*temp==i) cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}

