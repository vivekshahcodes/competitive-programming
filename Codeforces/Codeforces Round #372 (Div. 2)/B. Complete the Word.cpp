#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

map<char,int> m;

bool isGood(string s){
    int total = 0;
    int q = 0;
    for(auto i:m){
        if(i.second>0 && i.first!='?'){
            total++;
        }else if(i.first=='?'){
            q = i.second;
        }
    }

    return total+q >= 26 ? true : false;
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;
    string all = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    cin>>s;

    int n = s.length();

    if(n<26){
        cout<<-1;
    }else{

        bool ans = false;

        for(int i=0;i<26;i++){
            m[s[i]]++;
        }

        for(int i=0;i<=n-26;i++){
            if(isGood(s.substr(i,26))){
                for(int j=i;j<i+26;j++){
                    if(s[j]=='?'){
                        for(char c:all){
                            if(m[c]==0){
                                s[j] = c;
                                m[c]++;
                                break;
                            }
                        }
                    }
                }
                ans = true;
                break;
            }
            m[s[i]]--;
            if(i+26<n){
                m[s[i+26]]++;
            }
        }

        for(int i=0;i<n;i++){
            if(s[i]=='?'){
                s[i] = 'A';
            }
        }

        if(ans){
            cout<<s;
        }else{
            cout<<-1;
        }
    }

    return 0;
}
