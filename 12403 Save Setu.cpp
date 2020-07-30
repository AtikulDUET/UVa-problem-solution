#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,amount=0,taka;
    char str[20];
    cin>>t;
    getchar();
    while(t--){
        scanf("%s",str);
        if(strcmp("donate",str)==0){
            cin>>taka;
            amount = amount+taka;
        }
        else if(strcmp("report",str)==0)
            cout<<amount<<endl;
    }
    return 0;
}

