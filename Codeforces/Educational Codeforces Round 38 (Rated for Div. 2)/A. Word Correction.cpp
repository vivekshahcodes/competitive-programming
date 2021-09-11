#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

char a[6] = {'a','e','i','o','u','y'};

bool isVowel(char c){
    
    for(int i=0;i<6;i++){
        if(a[i]==c){
            return true;
        }
    }

    return false;
}

int main(){

    int n;

    cin>>n;

    string s;

    cin>>s;

    string ans = s.substr(0,1);

    for(int i=1;i<n;i++){
        if(isVowel(ans[ans.length()-1]) && isVowel(s[i])){
            continue;
        }
        ans += s[i];
    }

    cout<<ans;

    return 0;
}
