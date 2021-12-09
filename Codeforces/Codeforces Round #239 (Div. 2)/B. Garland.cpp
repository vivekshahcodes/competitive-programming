#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string a,b;

    cin>>a>>b;

    map<char,int> m,m1;

    for(int i=0;i<a.length();i++){
        m[a[i]]++;
    }

    for(int i=0;i<b.length();i++){
        m1[b[i]]++;
    }

    int ans = 0;

    for(auto i:m1){
        int x = m[i.first];
        if(x==0){
            ans = 0;
            break;
        }
        ans += min(i.second,x);
    }

    if(ans==0){
        cout<<-1;
    }else{
        cout<<ans;
    }

    return 0;
}
