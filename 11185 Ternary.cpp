#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>vec;
    int n,rem;
    while(scanf("%d",&n)){
        if(n<0) break;
            vec.clear();
        if(n==0)
            cout<<0;
        while(n!=0){
            rem = n % 3;
            vec.push_back(rem);
            n /= 3;
        }
        for(int i=vec.size()-1;i>=0;i--)
            cout<<vec[i];
        cout<<endl;

    }
    return 0;
}


