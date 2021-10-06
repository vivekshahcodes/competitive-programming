#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin>>n;

    int ans = 0;

    for(int i=0;i<n;i++){
        
        int input;
        cin>>input;

        ans += input-1;

        if(ans&1){
            cout<<1<<endl;
        }else{
            cout<<2<<endl;
        }
    }

    return 0;
}
