#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,rem,cnt;
    while(scanf("%d",&a)!=EOF){
        rem = 0; cnt=0;
    for(int i=0;;i++){
            cnt++;
        rem = ((rem*10)+1)%a;
        if(rem==0) break;
    }
    cout<<cnt<<endl;
    }
    return 0;
}

