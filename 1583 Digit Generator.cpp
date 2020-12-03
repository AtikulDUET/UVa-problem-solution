#include<bits/stdc++.h>
using namespace std;
int Generator(int n){
    int total = 0;
    while(n!=0){
        total += n%10;
        n/=10;
    }
    return total;
}
int main()
{
    int t,n,temp,res,ck;
    cin>>t;
    while(t--){
        cin>>n;
        ck = 0;
        if(n<1000){
        for(int i=n/2;i<n;i++){
            temp = i;
            temp = Generator(temp);
            if((temp+i)==n){
                    ck = 1;
                res = i;
                break;
            }
        }
        }
        else{
             for(int i=n-300;i<n;i++){
            temp = i;
            temp = Generator(temp);
            if((temp+i)==n){
                    ck = 1;
                res = i;
                break;
            }
        }
        }
        if(ck==1)
        cout<<res<<endl;
        else{
            cout<<0<<endl;
        }
    }
    return 0;
}

