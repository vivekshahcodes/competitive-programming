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

        int n = s.length();

        map<char,int> m;

        if(n&1){

            for(int i=0;i<n/2;i++){
                m[s[i]]++;
            }

            for(int i=(n/2)+1;i<n;i++){
                m[s[i]]--;
            }

        }else{

            for(int i=0;i<n/2;i++){
                m[s[i]]++;
            }

            for(int i=n/2;i<n;i++){
                m[s[i]]--;
            }
        }

        bool ans = true;

        for(auto i:m){
            if(i.second!=0){
                ans = false;
            }
        }

        if(ans){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}
