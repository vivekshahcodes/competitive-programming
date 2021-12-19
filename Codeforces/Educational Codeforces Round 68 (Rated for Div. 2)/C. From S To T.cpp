#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

bool isSubsequence(string s, string x){

    int ind = 0;

    for(int i=0;i<x.length();i++){
        if(s[ind]==x[i]){
            ind++;
        }

        if(ind==s.length()){
            return true;
        }
    }

    return false;
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;

    cin>>t;

    while(t--){

        string s,x,p;

        cin>>s>>x>>p;

        if(isSubsequence(s,x)){
            map<char,int> m;
            for(int i=0;i<x.length();i++){
                m[x[i]]++;
            }
            for(int i=0;i<s.length();i++){
                m[s[i]]--;
            }
            for(int i=0;i<p.length();i++){
                if(m[p[i]]){
                    m[p[i]]--;
                }
            }
            bool flag = true;
            for(auto i:m){
                if(i.second!=0){
                    flag = false;
                    break;
                }
            }
            if(flag){
                cout<<"YES\n";
            }else{
                cout<<"NO\n";
            }
        }else{
            cout<<"NO\n";
        }
    }

    return 0;
}
