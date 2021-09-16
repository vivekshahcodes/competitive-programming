#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string a = "WBWBWBWB";
    string b = "BWBWBWBW";

    bool flag = true;

    for(int i=0;i<8;i++){
        string s;
        cin>>s;
        if(s!=a && s!=b){
            flag = false;
        }
    }

    if(flag){
        cout<<"YES";
    }else{
        cout<<"NO";
    }

    return 0;
}
