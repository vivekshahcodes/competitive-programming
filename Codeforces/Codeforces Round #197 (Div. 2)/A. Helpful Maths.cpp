#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    string s;

    cin>>s;

    int a=0,b=0,c=0;

    for(int i=0;i<s.length();i++){
        if(s[i]=='1'){
            a++;
        }else if(s[i]=='2'){
            b++;
        }else if(s[i]=='3'){
            c++;
        }
    }

    string ans = "";

    for(int i=0;i<a;i++){
        if(ans.length()==0){
            ans+="1";
        }else{
            ans+="+1";
        }
    }

    for(int i=0;i<b;i++){
        if(ans.length()==0){
            ans+="2";
        }else{
            ans+="+2";
        }
    }

    for(int i=0;i<c;i++){
        if(ans.length()==0){
            ans+="3";
        }else{
            ans+="+3";
        }
    }

    cout<<ans;


    return 0;
}
