#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin>>n;

    map<string,bool> m;

    m["ABSINTH"] = true;
    m["BEER"] = true;
    m["BRANDY"] = true;
    m["CHAMPAGNE"] = true;
    m["GIN"] = true;
    m["RUM"] = true;
    m["SAKE"] = true;
    m["TEQUILA"] = true;
    m["VODKA"] = true;
    m["WHISKEY"] = true;
    m["WINE"] = true;

    int ans = 0;

    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        if(isdigit(s[0])){
            if(stoi(s)<18){
                ans++;
            }
        }else{
            if(m[s]){
                ans++;
            }
        }
    }

    cout<<ans;

    return 0;
}
