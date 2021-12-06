#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;

    cin>>s;

    int n = s.length();

    int pref[n] = {0}, suff[n] = {0};

    for(int i=0;i<n;i++){
        if(s[i]=='('){
            pref[i]++;
        }else{
            suff[i]++;
        }
    }

    for(int i=1;i<n;i++){
        pref[i] += pref[i-1];
    }

    for(int i=n-2;i>=0;i--){
        suff[i] += suff[i+1];
    }

    int ans = 0;

    for(int i=0;i<n-1;i++){
        if(pref[i]==suff[i+1]){
            ans = pref[i];
            break;
        }
    }

    if(ans==0){
        cout<<0;
    }else{
        cout<<1<<endl;
        cout<<ans*2<<endl;
        
        vector<int> v;

        int c = 0;

        for(int i=0;i<n;i++){
            if(s[i]=='('){
                v.push_back(i+1);
                c++;
            }

            if(c==ans){
                break;
            }
        }

        c = 0;

        for(int i=n-1;i>=0;i--){
            if(s[i]==')'){
                v.push_back(i+1);
                c++;
            }

            if(c==ans){
                break;
            }
        }

        sort(v.begin(),v.end());

        for(int i:v){
            cout<<i<<" ";
        }
    }

    return 0;
}
