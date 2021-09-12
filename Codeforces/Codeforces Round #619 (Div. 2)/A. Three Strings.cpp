#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;

    cin>>t;

    while(t--){

        string a,b,c;

        cin>>a>>b>>c;

        bool ans = true;

        for(int i=0;i<a.length();i++){
            if(a[i]==c[i]||b[i]==c[i]){
                continue;
            }else{
                ans = false;
            }
        }

        if(ans){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}
