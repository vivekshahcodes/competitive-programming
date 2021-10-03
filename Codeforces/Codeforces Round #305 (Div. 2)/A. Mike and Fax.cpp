#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

bool isPalindrome(string s){

    string t = s;
    reverse(t.begin(),t.end());

    if(s==t)
        return true;

    return false;
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;

    cin>>s;

    int k;

    cin>>k;

    if(s.length()<k || s.length()%k!=0){
        cout<<"NO";
        return 0;
    }

    int x = s.length()/k;

    for(int i=0;i<=s.length()-x;i+=x){
        if(!isPalindrome(s.substr(i,x))){
            cout<<"NO";
            return 0;
        }
    }

    cout<<"YES";

    return 0;
}
