#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin>>n;

    string s;

    cin>>s;

    string temp;

    for(int i=0;i<n;i++){
        if(s[i]=='0') continue;
        temp.push_back(s[i]);
    }

    s = temp;

    if(s.length()==0){
        cout<<"YES";
        return 0;
    }

    int total = 0;

    for(int i=0;i<s.length()-1;i++){
        total += s[i]-'0';
    }

    bool ans = false;

    for(int req=0;req<=total;req++){

        int curr = 0;

        for(int i=0;i<s.length();i++){

            if(curr+(s[i]-'0')>req){
                curr+=(s[i]-'0');
                break;
            }else if(curr+(s[i]-'0')==req){
                curr = 0;
            }else{
                curr+=(s[i]-'0');
            }
        }

        if(curr==0){
            ans = true;
            break;
        }
    }

    if(ans){
        cout<<"YES";
    }else{
        cout<<"NO";
    }

    return 0;
}
