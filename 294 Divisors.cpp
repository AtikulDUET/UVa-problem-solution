#include<bits/stdc++.h>
using namespace std;
int Divisor(int n){
    int cnt=0;
    for(int i=1;i*i<=n;i++){
        if(i*i==n) cnt+=1;
        else if(n%i==0) cnt +=2;
    }
    return cnt;
}
int main()
{
    int n,Max,Div,low,high,t,temp;
    cin>>t;
    while(t--){
        cin>>low>>high;
        Max = INT_MAX;
        Div = INT_MIN;
        for(int i=low;i<=high;i++){
            temp = Divisor(i);
            if(temp >Div){
                Div = temp;
                Max = i;
            }
        }
        cout<<"Between "<<low<<" and "<<high<<", "<<Max<<" has a maximum of "<<Div<<" divisors."<<endl;
    }
    return 0;
}


