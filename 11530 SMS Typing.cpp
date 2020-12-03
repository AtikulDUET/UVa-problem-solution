#include<bits/stdc++.h>
using namespace std;
int main()
{
    int str[250],cnt = 1,t,cas=1,sum;
    char str1[110];
    for(char ch='a';ch<='z';ch++){
        if(ch=='s') continue;
        if(cnt%4==0)
            cnt = 1;
        str[ch] = cnt++;
    }
    str['s'] = 4;
    str['z'] = 4;
    str[' '] = 1;
    scanf("%d",&t);
    while(t--){
            sum = 0;
            scanf("%*c%[^\n]",str1);
        for(int i=0;str1[i]!='\0';i++)
            sum += str[str1[i]];
        cout<<"Case #"<<cas++<<": "<<sum<<endl;
    }

    return 0;
}





