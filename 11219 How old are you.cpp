#include<bits/stdc++.h>
using namespace std;
int main()
{
    int d1,m1,y1,d2,m2,y2,cas=1,final,initial,t,year;
    cin>>t;
    while(t--){
    scanf("%d%*c%d%*c%d",&d1,&m1,&y1);
    scanf("%d%*c%d%*c%d",&d2,&m2,&y2);
    final = d1 + m1*30 + y1*365;
    initial = d2 + m2*30 + y2*365;
    year = (final-initial)/365;
    if( year>130)
        cout<<"Case #"<<cas++<<": Check birth date"<<endl;
    else if(final<initial)
        cout<<"Case #"<<cas++<<": Invalid birth date"<<endl;
    else if( year <= 130 && (final>initial) )
        cout<<"Case #"<<cas++<<": "<<year<<endl;
    else if( (d1==d2) || (m1==m2))
        cout<<"Case #"<<cas++<<": 0"<<endl;
    }
    return 0;
}

