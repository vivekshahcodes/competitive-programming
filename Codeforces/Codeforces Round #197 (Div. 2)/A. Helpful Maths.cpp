#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    string s;

    cin>>s;

    int n = s.length();

    vector<int> ans;

    for(int i=0;i<n;i++){
        if(!(i&1)){
            ans.push_back(s[i]-'0');
        }
    }

    sort(ans.begin(),ans.end());

    for(int i=0;i<ans.size();i++){
        
        if(i==ans.size()-1){
            cout<<ans[i];
        }else{
            cout<<ans[i]<<"+";
        }

    }

    return 0;
}
