#include<bits/stdc++.h>
#define ll long long int
#define Mod 1000000007
#define PI acos(-1.0)
#define gap ' '
#define el "\n"
#define pb push_back
#define mp make_pair
#define    maxv                            INT_MAX
#define    minv                            INT_MIN
#define    Sort(arr)                       sort(arr.begin(), arr.end());
#define    Rsort(arr)                      sort(arr.rbegin(), arr.rend());
#define    Min(arr)                        *min_element(arr.begin(), arr.end())
#define    Max(arr)                        *max_element(arr.begin(), arr.end())
#define    Print(arr)                       for(auto &i : arr) cout << i << ' '; cout <<"\n";
#define    IPV(arr)                        for(auto &i : arr) cin >> i;
#define    SUM(arr)                        accumulate(arr.begin(), arr.end(), 0LL)
using namespace std;
/** Atikul DUET CSE */

void DUETCSE()
{
    int n,temp,value,tt;
    vector<int>vec;
    queue<int>q;
    while(cin>>n){
        if(n==0) return;
        if(n==1){
            cout<<"Discarded cards:"<<endl;
            cout<<"Remaining card: "<<1<<endl;
            continue;
        }

        while(!q.empty()) q.pop();
        for(int i=1;i<=n;i++) q.push(i);
        cout<<"Discarded cards:";
        while(q.size()>2){
            temp = q.front();
            cout<<" "<<temp<<",";
            q.pop();
            temp = q.front();
            q.pop();
            q.push(temp);
        }
        temp = q.front();
        cout<<" "<<temp<<endl;

        q.pop();
        temp = q.front();
        cout<<"Remaining card: "<<temp<<endl;


    }
}

int main()
{

    DUETCSE();
    return 0;
}

