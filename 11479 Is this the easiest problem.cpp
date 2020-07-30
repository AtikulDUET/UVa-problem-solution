#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int a,b,c,t,cas = 1;
    cin>>t;
    while(t--){
        cin>>a>>b>>c;
        if(a+b<=c || b+c<=a || c+a<=b)
            cout<<"Case "<<cas++<<": Invalid"<<endl;
        else if( (a==b && b==c && c==a))
            cout<<"Case "<<cas++<<": Equilateral"<<endl;
        else if(a==b || b==c || c==a)
            cout<<"Case "<<cas++<<": Isosceles"<<endl;
        else
            cout<<"Case "<<cas++<<": Scalene"<<endl;

    }
    return 0;
}

