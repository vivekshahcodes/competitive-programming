#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    string s;

    cin>>s;

    int c = 0;

    for(int i=0;i<s.length();i++){
        if(s[i]=='4'||s[i]=='7'){
            c++;
        }
    }

    string a = to_string(c);

    bool flag = true;

    for(int i=0;i<a.length();i++){
        if(a[i]!='4' && a[i]!='7'){
            flag = false;
            break;
        }
    }

    if(flag){
        cout<<"YES";
    }else{
        cout<<"NO";
    }

    return 0;
}
