#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin>>n;

    map<string,int> m;

    for(int i=0;i<n;i++){

        string s;
        cin>>s;

        string ans;

        for(int i=0;i<s.length();i++){
            if(s[i]=='u'){
                ans.push_back('o');
                ans.push_back('o');
            }else{
                ans.push_back(s[i]);
            }
        }

        s = ans;
        ans.clear();

        bool h = false;

        for(int i=s.length()-1;i>=0;i--){

            if(s[i]=='h'){
                h = true;
            }else if(h && s[i]!='k'){
                h = false;
            }else if(h && s[i]=='k'){
                s[i] = '-';
            }
        }

        for(int i=0;i<s.length();i++){
            if(s[i]!='-'){
                ans.push_back(s[i]);
            }
        }

        m[ans]++;

    }

    cout<<m.size();

    return 0;
}
