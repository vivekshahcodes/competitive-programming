#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    int n;

    cin>>n;

    int ans = 0;

    string prev = "";

    for(int i=1;i<=n;i++){

        string s;

        cin>>s;

        if(s!=prev){
            ans++;
        }

        prev = s;
        
    }

    cout<<ans;


    return 0;
}
