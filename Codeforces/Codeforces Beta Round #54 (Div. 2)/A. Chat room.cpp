#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;

    cin>>s;

    string t = "hello";

    int i=0,j=0;

    while(i<s.length() && j<t.length()){
        if(s[i]==t[j]){
            i++;
            j++;
        }else{
            i++;
        }
    }

    if(j==t.length()){
        cout<<"YES";
    }else{
        cout<<"NO";
    }

    return 0;
}
