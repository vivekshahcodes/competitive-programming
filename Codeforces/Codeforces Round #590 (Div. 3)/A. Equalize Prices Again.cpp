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

        int ans = 0;

        for(int i=0;i<n;i++){
            int input;
            cin>>input;
            ans += input;
        }

        if(ans%n==0){
            cout<<ans/n<<endl;
        }else{
            cout<<ans/n + 1<<endl;
        }
    }

    return 0;
}
