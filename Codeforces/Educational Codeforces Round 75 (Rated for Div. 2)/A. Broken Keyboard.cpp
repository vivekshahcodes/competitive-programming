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

        string ans;
        map<char,int> m;

        int curr = 1;

        for(int i=1;i<s.length();i++){
            if(s[i]==s[i-1]){
                curr++;
                if(i==s.length()-1){
                    if(curr&1){
                        m[s[i]]++;
                    }
                }
            }else{

                if(curr&1){
                    m[s[i-1]]++;
                }

                curr = 1;

                if(i==s.length()-1){
                    if(curr&1){
                        m[s[i]]++;
                    }
                }

            }
        }

        if(s.length()==1){
            cout<<s<<endl;
        }else{
            for(auto i:m){
                if(i.second>0){
                    ans.push_back(i.first);
                }
            }

            cout<<ans<<endl;
        }

    }

    return 0;
}
