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

        for(int i=0;i<n;i++){

            int a,b,c;

            cin>>a>>b>>c;

            if(b&1){
                if(a==c){
                    cout<<b/2<<endl;
                }else{
                    cout<<(b/2)+1<<endl;
                }
            }else{
                cout<<b/2<<endl;
            }
        }
    }

    return 0;
}
