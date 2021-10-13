#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;

    cin>>s;

    int n = s.length();

    for(int i=0;i<n;i++){

        int x = s[i]-'0';

        x = min(x,9-x);

        if(x==0 && i==0) x = 9;

        s[i] = x+'0';
    }

    cout<<s;

    return 0;
}
