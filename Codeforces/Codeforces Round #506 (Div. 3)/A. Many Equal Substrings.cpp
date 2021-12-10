#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,k;

    cin>>n>>k;

    string s;

    cin>>s;

    string sub;

    for(int i=1;i<=n;i++){
        string x = s.substr(n-i,i);
        string temp = s+x;
        if(temp.substr(i,n)==s){
            sub = x;
            break;
        }
    }

    cout<<s;

    for(int i=0;i<k-1;i++){
        cout<<sub;
    }

    return 0;
}
