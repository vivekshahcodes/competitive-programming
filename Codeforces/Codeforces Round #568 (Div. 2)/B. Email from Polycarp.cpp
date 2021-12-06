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

        string a,b;
        cin>>a>>b;

        vector<pair<char,int>> x,y;

        char curr = a[0];
        int freq = 0;

        for(int i=0;i<a.length();i++){
            if(a[i]==curr){
                freq++;
            }else{
                x.push_back({curr,freq});
                curr = a[i];
                freq = 1;
            }
        }

        x.push_back({curr,freq});

        curr = b[0];
        freq = 0;

        for(int i=0;i<b.length();i++){
            if(b[i]==curr){
                freq++;
            }else{
                y.push_back({curr,freq});
                curr = b[i];
                freq = 1;
            }
        }

        y.push_back({curr,freq});

        bool ans = true;

        for(int i=0;i<x.size();i++){
            if(x[i].first!=y[i].first || x[i].second>y[i].second){
                ans = false;
                break;
            }
        }

        if(x.size()!=y.size()){
            ans = false;
        }

        string res = ans?"YES":"NO";

        cout<<res<<endl;

    }

    return 0;
}
