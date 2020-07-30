#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str[100];
    int cas=1;
    while(1){
        cin>>str;
        if(str[0]=='*')
            break;
        if(strcmp("Hajj",str)==0)
            cout<<"Case "<<cas++<<": "<<"Hajj-e-Akbar"<<endl;
        else if(strcmp("Umrah",str)==0)
            cout<<"Case "<<cas++<<": "<<"Hajj-e-Asghar"<<endl;
    }
    return 0;
}

