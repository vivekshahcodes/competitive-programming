#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

string binaryRep(int n){

    string ans;

    while(n){
        if(n&1){
            ans = "1"+ans;
        }else{
            ans = "0"+ans;
        }
        n>>=1;
    }

    return ans;
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin>>n;

    int ans = 0;

    for(int i=1;i<=512;i++){

        string s = binaryRep(i);
        int x = stoi(s);

        if(x<n){
            ans++;
        }else if(x==n){
            ans++;
            break;
        }else{
            break;
        }
    }

    cout<<ans;

    return 0;
}
