#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin>>n;

    string s,ans;

    cin>>s;

    if(n%3==1){
        for(int i=0;i<4;i+=2){
            ans.push_back(s[i]);
            ans.push_back(s[i+1]);
            ans.push_back('-');
        }
        for(int i=4;i<n;i+=3){
            for(int j=0;j<3;j++){
                ans.push_back(s[i+j]);
            }
            ans.push_back('-');
        }
    }else if(n%3==2){
        ans.push_back(s[0]);
        ans.push_back(s[1]);
        ans.push_back('-');
        for(int i=2;i<n;i+=3){
            for(int j=0;j<3;j++){
                ans.push_back(s[i+j]);
            }
            ans.push_back('-');
        }
    }else{
        for(int i=0;i<n;i+=3){
            for(int j=0;j<3;j++){
                ans.push_back(s[i+j]);
            }
            ans.push_back('-');
        }
    }

    for(int i=0;i<ans.length()-1;i++){
        cout<<ans[i];
    }

    return 0;
}
