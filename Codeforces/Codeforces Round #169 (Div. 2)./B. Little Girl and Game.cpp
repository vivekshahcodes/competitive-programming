#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

bool isPalindrome(string s){

    sort(s.begin(),s.end());
    int n = s.length();

    for(int i=0;i<n;i+=2){
        if(s[i]!=s[i+1]){
            return false;
        }
    }

    return true;
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;

    cin>>s;

    if(isPalindrome(s)){
        cout<<"First";
    }else{
        int n = s.length();
        if(n&1){
            cout<<"First";
        }else{
            cout<<"Second";
        }
    }

    return 0;
}
