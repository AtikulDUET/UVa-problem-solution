#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,cas=1,term1,term2,Final,attend,sum;
    int Class_Test[3];
    cin>>t;
    while(t--){
            sum = 0;
        cin>>term1>>term2>>Final>>attend;
        for(int i=0;i<3;i++){
            cin>>Class_Test[i];
        }
    sort(Class_Test,Class_Test+3);
    sum = term1+term2+Final+attend+(Class_Test[1]+Class_Test[2])/2;
        if(sum>=90)
            cout<<"Case "<<cas++<<": A"<<endl;
        else if(sum>=80 && sum<90)
            cout<<"Case "<<cas++<<": B"<<endl;
        else if(sum>=70 && sum<80)
            cout<<"Case "<<cas++<<": C"<<endl;
        else if(sum>=60 && sum<70)
            cout<<"Case "<<cas++<<": D"<<endl;
        else if(sum<60)
            cout<<"Case "<<cas++<<": F"<<endl;
    }
    return 0;
}

