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

        cin>>s;

        int l = 0;

        for(int i=0;i<n;i++){
            if(s[i]=='<'){
                l++;
            }else{
                break;
            }
        }

        int r = 0;

        for(int i=n-1;i>=0;i--){
            if(s[i]=='>'){
                r++;
            }else{
                break;
            }
        }

        cout<<min(l,r)<<"\n";

    }

    return 0;
}
