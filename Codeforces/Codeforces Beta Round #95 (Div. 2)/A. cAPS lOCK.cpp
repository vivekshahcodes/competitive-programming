#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;

    cin>>s;

    bool accident = false;

    int u = 0;

    for(int i=0;i<s.length();i++){
        if(isupper(s[i])){
            u++;
        }
    }

    if(u==s.length()){
        for(int i=0;i<s.length();i++){
            s[i] = tolower(s[i]);
        }
    }else if(u==s.length()-1){
        if(islower(s[0])){
            for(int i=0;i<s.length();i++){
                s[i] = tolower(s[i]);
            }
            s[0] = toupper(s[0]);
        }
    }

    cout<<s;

    return 0;
}
