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
        char c;

        cin>>n>>c;

        string s;

        cin>>s;

        int total = count(s.begin(),s.end(),c);

        if(total==n){
            cout<<0<<endl;
        }else{
            int x = n/2;

            int i;
            bool flag = false;

            for(i=n-1;i>=x;i--){
                if(s[i]==c){
                    flag = true;
                    break;
                }
            }

            if(flag){
                cout<<1<<endl;
                cout<<i+1<<endl;
            }else{
                cout<<2<<endl;
                cout<<n<<" "<<n-1<<endl;
        }
    }

    return 0;
}
