#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

bool isVowel(char c){
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='y'){
        return true;
    }

    return false;
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;

    cin>>s;

    string ans;

    for(int i=0;i<s.length();i++){
        char c = tolower(s[i]);
        if(!isVowel(c)){
            ans+=".";
            ans+=c;
        }
    }

    cout<<ans;

    return 0;
}
