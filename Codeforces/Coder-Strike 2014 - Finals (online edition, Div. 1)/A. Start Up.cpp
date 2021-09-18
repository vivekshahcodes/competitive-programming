#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

bool isPalindrome(string s){

    string t = s;
    reverse(t.begin(),t.end());

    return s==t;
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;

    cin>>s;

    string t = "AHIMOTUVWXY";

    bool ans = true;

    for(int i=0;i<s.length();i++){
        bool flag = false;
        for(int j=0;j<t.length();j++){
            if(s[i]==t[j]){
                flag = true;
                break;
            }
        }
        if(!flag){
            ans = false;
            break;
        }
    }

    if(isPalindrome(s) && ans){
        cout<<"YES";
    }else{
        cout<<"NO";
    }

    return 0;
}
