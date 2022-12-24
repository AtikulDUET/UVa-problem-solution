#include<bits/stdc++.h>
using namespace std;
map<int,int>mp;

int main()
{
    int value;
    vector<int>vec;
    while(scanf("%d",&value)!=EOF){
        if(mp[value]==0)
            vec.push_back(value);
        mp[value]+=1;
    }

    for(int i=0;i<vec.size();i++)
        cout<<vec[i]<<" "<<mp[vec[i]]<<endl;
    return 0;
}

