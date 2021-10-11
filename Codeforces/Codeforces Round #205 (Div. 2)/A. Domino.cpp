#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin>>n;

    int top = 0, bottom = 0;
    bool pair = false;

    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;

        if((a&1)!=(b&1)){
            pair = true;
        }
        
        top += a;
        bottom += b;
    }

    if((top&1) && (bottom&1)){
        if(pair){
            cout<<1;
        }else{
            cout<<-1;
        }
    }else if(!(top&1) && !(bottom&1)){
        cout<<0;
    }else{
        cout<<-1;
    }

    return 0;
}
