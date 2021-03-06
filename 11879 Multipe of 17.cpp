#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str[105];
    int rem;
    while(scanf("%s",str)){
        if(str[0]=='0' && strlen(str)==1) break;
        rem = 0;
        for(int i=0;str[i]!='\0';i++){
            rem = ((rem*10)+(str[i]-'0')) % 17;
        }
        if(rem==0)
            cout<<"1"<<endl;
        else
            cout<<"0"<<endl;

    }
    return 0;
}

