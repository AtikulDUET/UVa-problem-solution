#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,value,i;
    vector<int>vec;
    while(scanf("%d",&n)!=EOF){
            if(n==0)
            break;
        for(int i=0;i<n;i++){
            cin>>value;
            vec.push_back(value);
        }
        sort(vec.begin(),vec.end());
        for(i=0;i<n-1;i++){
            cout<<vec[i]<<" ";
        }
        cout<<vec[i]<<endl;
        vec.clear();
    }
    return 0;
}

