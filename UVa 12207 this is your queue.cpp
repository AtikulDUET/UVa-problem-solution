#include<bits/stdc++.h>
using namespace std;
map<int,int>mp;

int main()
{
    int p,c,value,t,cas=1;
    vector<int>vec;
    char ch;

    while(1){
        cin>>p>>c;
        if(p==0 && c==0) return 0;
        mp.clear();
        cout<<"Case "<<cas++<<":"<<endl;
        vector<int >vec;
        vec.clear();
        for(int i=1;i<=min(p,c);i++){
            vec.push_back(i);
            mp[i] = 1;
        }
        vector<int>::iterator it;

        while(c--){
            cin>>ch;
            if(ch=='N'){
                it = vec.begin();
                int temp= *it;
                cout<<temp<<endl;
                vec.erase(it);
                vec.push_back(temp);
            }
            else if(ch=='E'){
                 cin>>value;
                 if(mp[value]==0){
                    it = vec.begin();
                    vec.insert(it,value);
                 }
                 else{

//                 cout<<"checking: "<<endl;
//                 for(int i=0;i<vec.size();i++)
//                    cout<<vec[i]<<"   ";
//                 cout<<endl;

                 it = find(vec.begin(),vec.end(),value);

                // cout<<"itt: "<<*it<<endl;
                 int idx = distance(vec.begin(),it);
                 //cout<<"idx: "<<idx<<endl;
                    vec.erase(it);
                    it = vec.begin();
                    vec.insert(it,value);

                 }

                 mp[value] = 1;

            }
        }


    }
    return 0;
}
