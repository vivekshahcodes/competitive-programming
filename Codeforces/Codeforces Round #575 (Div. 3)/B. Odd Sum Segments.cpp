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

        int n,k;

        cin>>n>>k;

        int a[n], odd = 0;

        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]&1){
                odd++;
            }
        }

        if(odd<k){
            cout<<"NO\n";
        }else{

            if((odd-k)&1){
                cout<<"NO\n";
                continue;
            }

            cout<<"YES\n";

            int o = 0;
            
            for(int i=0;i<n;i++){

                if(o==k-1){
                    break;
                }

                if(a[i]&1){
                    cout<<i+1<<" ";
                    o++;
                }

            }

            cout<<n<<"\n";
        }            

    }

    return 0;
}
