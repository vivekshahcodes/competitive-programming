#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;

    cin>>s;

    int x = s[s.length()-1]-'0';

    bool flag = false;

    for(int i=0;i<s.length()-1;i++){
        int y = s[i]-'0';
        if(y%2==0){
            if(x>y){
                swap(s[i],s[s.length()-1]);
                flag = true;
                break;
            }
        }
    }

    if(flag){
        cout<<s;
    }else{
        for(int i=s.length()-2;i>=0;i--){
            int y = s[i]-'0';
            if(s[i]%2==0){
                swap(s[i],s[s.length()-1]);
                break;
            }
        }

        if(s[0]=='0' || (s[s.length()-1]-'0')&1){
            cout<<-1;
        }else{
            cout<<s;
        }
    }

    return 0;
}
