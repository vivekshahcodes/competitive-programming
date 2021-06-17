#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    string s;

    cin>>s;

    int u = 0, l = 0;

    for(int i=0;i<s.length();i++){
        if(isupper(s[i])){
            u++;
        }else{
            l++;
        }
    }

    if(l>=u){
        transform(s.begin(),s.end(),s.begin(),::tolower);
    }else{
        transform(s.begin(),s.end(),s.begin(),::toupper);
    }

    cout<<s;

    return 0;
}
