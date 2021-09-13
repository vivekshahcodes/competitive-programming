#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;

    cin>>s;

    int i = 0;

    bool ans = true;

    while(i<s.length()){
        if((i+2)<s.length() && s[i]=='1' && s[i+1]=='4' && s[i+2]=='4'){
            i+=3;
            continue;
        }else if((i+1)<s.length() && s[i]=='1' && s[i+1]=='4'){
            i+=2;
            continue;
        }else if(s[i]=='1'){
            i++;
            continue;
        }else{
            ans = false;
            break;
        }
    }

    if(ans){
        cout<<"YES";
    }else{
        cout<<"NO";
    }

    return 0;
}
