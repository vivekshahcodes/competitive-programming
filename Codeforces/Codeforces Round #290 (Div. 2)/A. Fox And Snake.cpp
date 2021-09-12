#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,m;

    cin>>n>>m;

    bool flag = true;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(i&1){
                cout<<"#";
            }else{
                if(i%4==0 && j==1){
                    cout<<"#";
                }else if(i%4!=0 && i%2==0 && j==m){
                    cout<<"#";
                }else{
                    cout<<".";
                }
            }
        }
        cout<<endl;
    }

    return 0;
}
