#include<bits/stdc++.h>
using namespace std;
int main()
{
    int init[200],cnt=1,assin=2;
    char str[33];

    for(char i='A';i<='Z';i++){
        if(i=='S') continue;
        if(cnt%4==0){
            cnt = 1;
            assin++;
        }
        init[i] = assin;
        cnt++;
    }
    init['S'] = 7;
    init['Z'] = 9;

    while(scanf("%s",str)!=EOF){
        for(int i=0;str[i]!='\0';i++){
            if(str[i]>='A'&&str[i]<='Z')
                cout<<init[str[i]];
            else
                cout<<str[i];
        }
        cout<<endl;
    }
    return 0;
}


