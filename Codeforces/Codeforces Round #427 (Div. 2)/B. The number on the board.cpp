#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int k;
    string s;

    cin>>k>>s;

    int ans = 0;
    int total = 0;

    for(int i=0;i<s.length();i++){
        total += s[i]-'0';
    }

    if(total >= k){
        cout<<0;
    }else{
        int x = k-total;
        int curr = 0;
        sort(s.begin(),s.end());
        for(int i=0;i<s.length();i++){
            curr += 9-(s[i]-'0');
            ans++;
            if(curr>=x){
                break;
            }
        }
        
        cout<<ans;
    }

    return 0;
}
