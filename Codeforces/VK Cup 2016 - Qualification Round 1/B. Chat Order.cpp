#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin>>n;

    set<string> s;
    string a[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    for(int i=n-1;i>=0;i--){
        if(s.count(a[i])==0){
            cout<<a[i]<<endl;
        }
        s.insert(a[i]);
    }

    return 0;
}
