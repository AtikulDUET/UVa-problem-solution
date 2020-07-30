#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,value,cas=1;
    vector<int>vec;
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=1;i<=n;i++){
            cin>>value;
            vec.push_back(value);
        }
        sort(vec.begin(),vec.end());
        cout<<"Case "<<cas++<<": "<<vec[n-1]<<endl;
        vec.clear();
    }
    return 0;
}

