#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,k;

    cin>>n>>k;

    string s;

    cin>>s;

    map<char,int> m;

    for(int i=0;i<n;i++){
        m[s[i]]++;
    }

    while(true){

        char curr;
        for(auto i:m){
            if(i.second>0){
                curr = i.first;
                break;
            }
        }

        string ans;

        for(int i=0;i<s.length();i++){
            if(s[i]==curr && m[s[i]]>0 && k>0){
                m[s[i]]--;
                k--;
            }else{
                ans.push_back(s[i]);
            }
        }

        s = ans;


        if(k==0){
            break;
        }
    }

    cout<<s;

    return 0;
}
