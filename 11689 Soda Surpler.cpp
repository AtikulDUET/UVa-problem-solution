#include<bits/stdc++.h>
using namespace std;
int main()
{
    int e,f,c,rem,total,t;
    cin>>t;
    while(t--){
            total = 0;
    cin>>e>>f>>c;
    e = e + f;
    while(e>=c){
        rem = e / c;
        total += rem;
        e = e % c + rem;

    }
    cout<<total<<endl;
    }
    return 0;
}

