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

        int n;

        cin>>n;

        string s;

        for(int i=0;i<2*n;i++){
            if(i&1){
                s+=")";
            }else{
                s+="(";
            }
        }

        cout<<s<<endl;

        for(int i=1;i<n;i++){
            s[i*2] = ')';
            s[(i*2)-1] = '(';
            cout<<s<<endl;
        }
    }

    return 0;
}
