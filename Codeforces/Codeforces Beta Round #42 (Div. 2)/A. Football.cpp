#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, ma = 0;

    cin>>n;

    map<string,int> m;

    for(int i=0;i<n;i++){
        string input;
        cin>>input;
        m[input]++;
        ma = max(ma,m[input]);
    }

    for(auto i:m){
        if(i.second==ma){
            cout<<i.first;
            break;
        }
    }

    return 0;
}
