#include<bits/stdc++.h>
using namespace std;
int main()
{
    int heru,ausar,auset;
    while(scanf("%d%d%d",&heru,&ausar,&auset)!=EOF){
        if(heru==0&&ausar==0&&auset==0)
            break;
        if( (heru*heru + ausar*ausar)==auset*auset || (ausar*ausar + auset*auset)==heru*heru ||(heru*heru + auset*auset)==ausar*ausar)
            cout<<"right"<<endl;
        else
            cout<<"wrong"<<endl;
    }
    return 0;
}

