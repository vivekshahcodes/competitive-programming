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

    int x=0,y=0,ans=0;

    bool lower;

    for(int i=0;i<n;i++){

        if(s[i]=='R'){
            if(i==0) lower = true;
            x++;
        }else{
            if(i==0) lower = false;
            y++;
        }

        if(lower){
            if(y>x){
                ans++;
                lower = false;
            }
        }else{
            if(x>y){
                ans++;
                lower = true;
            }
        }
    }

    cout<<ans;

    return 0;
}
