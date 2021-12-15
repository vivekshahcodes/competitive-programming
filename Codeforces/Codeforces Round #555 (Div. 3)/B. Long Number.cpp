#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin>>n;

    string s;

    cin>>s;

    map<int,char> m;

    for(int i=1;i<=9;i++){
        char c;
        cin>>c;
        m[i] = c;
    }

    bool active = false;

    for(int i=0;i<n;i++){
        int x = s[i]-'0';
        int y = m[x]-'0';

        if(!active){
            if(y>x){
                s[i] = m[x];
                active = true;
            }
        }else{
            if(y>=x){
                s[i] = m[x];
            }else{
                break;
            }
        }
    }

    cout<<s;

    return 0;
}
