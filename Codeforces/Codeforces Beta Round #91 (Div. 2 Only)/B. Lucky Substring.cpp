#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;

    cin>>s;

    int four = 0, seven = 0;

    for(int i=0;i<s.length();i++){
        if(s[i]=='4'){
            four++;
        }else if(s[i]=='7'){
            seven++;
        }
    }

    if(four>=seven && four>0){
        cout<<4;
    }else if(seven>four && seven>0){
        cout<<7;
    }else{
        cout<<-1;
    }

    return 0;
}
