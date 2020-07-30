#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,arr[20],i,temp,cnt;
    while(scanf("%d",&n)!=EOF){
        if(n==0)
            break;
        i = 0,temp = n,cnt=0;
        while(n>0){
            arr[i] = n % 2;
            if(n%2==1)
                cnt++;
            n = n / 2;
            i++;
        }
        cout<<"The parity of ";
    for(int j=i-1;j>=0;j--){
        cout<<arr[j];
    }
    cout<<" is "<<cnt<<" (mod 2)."<<endl;
    }
    return 0;
}

