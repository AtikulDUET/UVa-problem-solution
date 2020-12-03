#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[3003],n,temp,cnt;
    vector<int>vec;
    set<int>s;
    while(scanf("%d",&n)==1){
            memset(arr,0,sizeof(arr));
            cnt=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
    for(int i=0;i<n-1;i++){
        temp = abs(arr[i+1]-arr[i]);
        vec.push_back(temp);
    }
    sort(vec.begin(),vec.end());
    for(int i=0;i<vec.size();i++){

        if(vec[i]<n)
            s.insert(vec[i]);
    }
    if(s.size()==n-1)
        cout<<"Jolly"<<endl;
    else
        cout<<"Not jolly"<<endl;
    vec.clear();
    s.clear();
    }
    return 0;
}

