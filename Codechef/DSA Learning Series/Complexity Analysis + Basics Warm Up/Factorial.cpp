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

        ll n;

        cin>>n;

        int two = 0, five = 0;

        for(int i=1;i<=n;i++){
            
            int x = i;
            while(x%2==0){
                two++;
                x/=2;
            }

            while(x%5==0){
                five++;
                x/=5;
            }
        }

        cout<<min(two,five)<<endl;
    }

    return 0;
}
