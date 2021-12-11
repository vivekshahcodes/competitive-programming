#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,q;

    cin>>n>>q;

    string s;

    cin>>s;

    map<int,int> m;
    int ans = 0;

    for(int i=1;i<s.length()-1;i++){
        if(s[i]=='b' && s[i-1]=='a' && s[i+1]=='c'){
            m[i]++;
            ans++;
        }
    }

    while(q--){

        int ind;
        char c;

        cin>>ind>>c;
        ind--;

        char curr = s[ind];

        if(curr==c){
            cout<<ans<<endl;
            continue;
        }else{
            if(curr=='a'){
                if(ind+1<n){
                    if(m[ind+1]>0){
                        m[ind+1]--;
                        ans--;
                    }
                }
            }else if(curr=='b'){
                if(m[ind]>0){
                    m[ind]--;
                    ans--;
                }
            }else{
                if(ind-1>=0){
                    if(m[ind-1]>0){
                        m[ind-1]--;
                        ans--;
                    }
                }
            }

            s[ind] = c;

            if(s[ind]=='a'){
                if(ind+2<n){
                    if(s[ind+1]=='b' && s[ind+2]=='c'){
                        m[ind+1]++;
                        ans++;
                    }
                }
            }else if(s[ind]=='b'){
                if(ind-1>=0 && ind+1<n){
                    if(s[ind-1]=='a' && s[ind+1]=='c'){
                        m[ind]++;
                        ans++;
                    }
                }
            }else{
                if(ind-2>=0){
                    if(s[ind-2]=='a' && s[ind-1]=='b'){
                        m[ind-1]++;
                        ans++;
                    }
                }
            }

            cout<<ans<<endl;
        }
        
    }

    return 0;
}
