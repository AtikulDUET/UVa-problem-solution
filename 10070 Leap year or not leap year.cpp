#include<bits/stdc++.h>
using namespace std;
int flag;
bool Ck(char year[],int n){
    int rem=0;
    for(int i=0;year[i]!='\0';i++){
        rem = (rem*10+(year[i]-'0'))%n;
    }
    if(rem==0)
        return 1;
    else
        return 0;
}

bool Leap_year(char year[]){
    if((Ck(year,4)==1 && Ck(year,100)==0) || Ck(year,400)==1){
            flag = 1;
    return 1;
    }
    else
         return 0;
}

int main()
{
    char year[10000];
    int ck;
    while(scanf("%s",year)==1){
            if(flag==1)
                cout<<endl;
            ck = 0,flag = 0;
        if(Leap_year(year)==1){
            cout<<"This is leap year."<<endl;
            ck = 1;
            if(Ck(year,15)==1){
                    flag = 1;
            cout<<"This is huluculu festival year."<<endl;
            }
        if(Ck(year,55)==1){
                flag = 1;
            cout<<"This is bulukulu festival year."<<endl;
        }
        }
        else{
        if(Ck(year,15)==1){
            cout<<"This is huluculu festival year."<<endl;
        flag = 1;
            ck = 1;
        }
        }
        if(ck ==0 && flag!=1)
            cout<<"This is an ordinary year."<<endl<<endl;
    }
    return 0;
}


