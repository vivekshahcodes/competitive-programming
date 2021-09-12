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

    int ans = 0;

    for(int i=0;i<n-1;i+=2){
        if(s[i]=='a' && s[i+1]=='a'){
            s[i+1] = 'b';
            ans++;
        }else if(s[i]=='b' && s[i+1]=='b'){
            s[i+1] = 'a';
            ans++;
        }
    }

    cout<<ans<<endl<<s<<endl;

    return 0;
}
