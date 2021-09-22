#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;

    cin>>s;

    bool flag = true;

    for(int i=0;i<s.length();i++){

        if(flag){
            if(s[i]=='0' || i==s.length()-1){
                flag = false;
            }else{
                cout<<s[i];
            }
        }else{
            cout<<s[i];
        }
    }

    return 0;
}
