#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin>>n;

    string s;

    cin>>s;

    int e = 0;

    for(int i=0;i<n;i++){
        if(s[i]=='8'){
            e++;
        }
    }

    cout<<min(e,n/11);

    return 0;
}
