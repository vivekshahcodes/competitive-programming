#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    char s;

    cin>>s;

    string a,b;

    cin>>a>>b;

    map<char,int> m;

    m['T'] = 10;
    m['J'] = 11;
    m['Q'] = 12;
    m['K'] = 13;
    m['A'] = 14;

    if(a[1]==s && b[1]!=s){
        cout<<"YES";
    }else{
        if(a[1]==b[1]){

            int x,y;
            if(m.count(a[0])>0){
                x = m[a[0]];
            }else{
                x = a[0]-'0';
            }

            if(m.count(b[0])>0){
                y = m[b[0]];
            }else{
                y = b[0]-'0';
            }

            if(x>y){
                cout<<"YES";
            }else{
                cout<<"NO";
            }
        }else{
            cout<<"NO";
        }
    }

    return 0;
}
