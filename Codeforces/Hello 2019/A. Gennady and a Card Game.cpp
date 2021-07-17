#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    string s;

    cin>>s;

    bool flag = false;

    for(int i=0;i<5;i++){
        
        string a;

        cin>>a;

        if(s[0]==a[0]||s[1]==a[1]){
            flag = true;
        }
    }

    if(flag){
        cout<<"YES";
    }else{
        cout<<"NO";
    }

    return 0;
}
