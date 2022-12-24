
#include<bits/stdc++.h>
using namespace std;

int main()
{
    stack<char>s;
    char ch1,ch2,ss[10000],ch;
    string str;
    int t;
    //freopen("1111.txt","w",stdout);
    cin>>t;
    ch = getchar();
    while(t--){
        gets(ss);
        if(strlen(ss)==0)
            cout<<"Yes"<<endl;
        else{

        str = ss;

        while(!s.empty()){
            s.pop();
        }

        bool ck = 0;
        s.push(str[0]);
        for(int i=1;i<str.size();i++){
             ch1 = str[i];

        //    cout<<"ch1: "<<ch1<<endl;
             if(ch1==']' || ch1==')'){
                   // cout<<"Size: "<<s.size()<<endl;
                if(s.size()==0){
                      ///  cout<<"ck1"<<endl;
                    ck = 1;
                    break;
                }


                else if(s.size()>0){
                    ch2 = s.top();
                   // cout<<"ch1: "<<ch1<<"  ch2: "<<ch2<<endl;
                    if( (ch2=='[' && ch1==']') ||(ch2=='(' && ch1==')') )
                        s.pop();

                    else{
                           // cout<<"ck2"<<endl;
                        ck = 1;
                        break;
                    }
                }
                else{
                      ///  cout<<"ck3"<<endl;
                    ck = 1;
                    break;
                }
             }

             else{
                   // cout<<"Push: "<<ch1<<endl;
                s.push(ch1);
             }

        }

       // cout<<"ck: "<<ck<<endl;
        if(ck==1 || s.size()>0)
            cout<<"No"<<endl;
        else
            cout<<"Yes"<<endl;
        }
    }
    return 0;
}

