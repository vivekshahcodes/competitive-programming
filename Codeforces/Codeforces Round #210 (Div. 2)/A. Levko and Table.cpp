#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,k;

    cin>>n>>k;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==j){
                cout<<k<<" ";
            }else{
                cout<<0<<" ";
            }
        }
        cout<<endl;
    }

    return 0;
}
