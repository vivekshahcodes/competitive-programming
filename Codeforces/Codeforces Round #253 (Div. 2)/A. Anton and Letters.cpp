#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;

    getline(cin,s);

    set<char> c;

    for(int i=0;i<s.length();i++){
        if((i-1)%3==0 && isalpha(s[i])){
            c.insert(s[i]);
        }
    }

    cout<<c.size();

    return 0;
}
