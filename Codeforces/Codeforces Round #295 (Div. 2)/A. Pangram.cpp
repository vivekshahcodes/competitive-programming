#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    int n;

    cin>>n;

    string s;

    cin>>s;

    set<char> charCount;

    for(int i=0;i<n;i++){
        charCount.insert(tolower(s[i]));
    }

    if(charCount.size()==26){
        cout<<"YES";
    }else{
        cout<<"NO";
    }

    return 0;
}
