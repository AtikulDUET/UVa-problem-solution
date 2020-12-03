#include<bits/stdc++.h>
using namespace std;
int cnt;
int Bubble_sort(int arr[],int n){
    cnt = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            if(arr[j]>arr[j+1]){
                cnt++;
                swap(arr[j],arr[j+1]);
            }
        }
    }
    return cnt;
}
int main()
{
    int arr[1004],n;
    while(scanf("%d",&n)!=EOF){
            memset(arr,0,sizeof(arr));
        for(int i=0;i<n;i++)
            cin>>arr[i];
        cout<<"Minimum exchange operations : "<<Bubble_sort(arr,n-1)<<endl;

    }
    return 0;
}


