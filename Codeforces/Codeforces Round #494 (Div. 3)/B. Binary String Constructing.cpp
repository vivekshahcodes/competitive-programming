#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    int a,b,k;

    cin>>a>>b>>k;

    string ans = "";

    int ac=0,bc=0;

    bool flag = true;

    if(a>=b){
        for(int i=0;i<k+1;i++){
            if(flag){
                ans+="0";
                flag = false;
                ac++;
            }else{
                ans+="1";
                flag = true;
                bc++;
            }
        }
        int rema = a-ac,remb = b-bc;

        string tempa = "",tempb = "";

        for(int i=0;i<rema;i++){
            tempa+="0";
        }

        for(int i=0;i<remb;i++){
            tempb+="1";
        }

        cout<<tempa+ans[0]+tempb+ans.substr(1,ans.length()-1);

    }else{
        for(int i=0;i<k+1;i++){
            if(flag){
                ans+="1";
                flag = false;
                bc++;
            }else{
                ans+="0";
                flag = true;
                ac++;
            }
        }

        int rema = a-ac,remb = b-bc;

        string tempa = "",tempb = "";

        for(int i=0;i<rema;i++){
            tempa+="0";
        }

        for(int i=0;i<remb;i++){
            tempb+="1";
        }

        cout<<tempb+ans[0]+tempa+ans.substr(1,ans.length()-1);
    }

    return 0;
}
