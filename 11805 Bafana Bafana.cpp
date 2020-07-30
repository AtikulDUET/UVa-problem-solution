#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,p,t,cas=1;
    cin>>t;
    while(t--){
    cin>>n>>k>>p;
    for(int i=1;i<=p;i++){
        k++;
    }
    if(k<n)
        cout<<"Case "<<cas++<<": "<<k<<endl;
    else if(k%n==0)
        cout<<"Case "<<cas++<<": "<<n<<endl;
    else if(k>n)
        cout<<"Case "<<cas++<<": "<<k%n<<endl;
    }
    return 0;
}

