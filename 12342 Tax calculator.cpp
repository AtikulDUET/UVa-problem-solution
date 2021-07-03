#include<bits/stdc++.h>
#define ll long long int
using namespace std;
ll Pertence(ll n, ll p){
    double res;
    ll ans;
    res = (n*p)/100.0;
    ans = ceil(res);
    return ans;
}
int main()
{
    int t,cas = 1;
    ll tax,temp,n;
    cin>>t;
    while(t--){
        cin>>n;
        temp = n;
        tax = 0;
        if(n>180000){
            temp-=180000;
        }
        if(n> 180000 && temp>0 ){
            if(n<=480000){
                tax += Pertence(temp,10);
            temp = 0;
            }
            else{
                tax+=30000;
                temp-=300000;
            }
        }
        if(n>480000 && temp>0){
            if(temp<=400000){
                tax+=Pertence(temp,15);
                temp = 0;
            }
            else{
                tax+=60000;
                temp-=400000;
            }
        }
        if(n>880000   && temp>0){
            if(temp<=300000){
                tax+=Pertence(temp,20);
                temp = 0;
            }
            else{
                tax+= 60000;
                temp-=300000;
            }
        }
        if(temp>0 && n>1180000){

            tax+=Pertence(temp,25);

        }
        if( (tax>0 &&tax<2000) ||(n>180000 && tax<=2000))
            tax = 2000;
        cout<<"Case "<<cas++<<": "<<tax<<endl;


    }
    return 0;
}

