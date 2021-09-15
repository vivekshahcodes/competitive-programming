#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int k;

    cin>>k;

    string s;

    cin>>s;

    if(k==1){
        cout<<s;
        return 0;
    }

    map<char,int> m;

    for(int i=0;i<s.length();i++){
        m[s[i]]++;
    }

    bool flag = true;

    for(auto i:m){
        if(i.second%k!=0){
            flag = false;
            break;
        }
    }

    if(flag){
        string ans;
        for(auto i:m){
            for(int j=1;j<=i.second/k;j++){
                ans+=i.first;
            }
        }
        
        string fans;
        for(int i=1;i<=k;i++){
            fans+=ans;
        }
        cout<<fans;
    }else{
        cout<<-1;
    }

    return 0;
}
