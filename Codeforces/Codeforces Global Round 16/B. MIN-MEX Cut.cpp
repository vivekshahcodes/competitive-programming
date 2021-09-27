#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;

    cin>>t;

    while(t--){

        string s;

        cin>>s;

        int ans = 0;
        bool isZero = false;

        for(int i=0;i<s.length();i++){
            if(s[i]=='0' && !isZero){
                isZero = true;
                ans++;
            }else if(s[i]=='1'){
                isZero = false;
            }
        }

        cout<<min(2,ans)<<endl;
    }

    return 0;
}
