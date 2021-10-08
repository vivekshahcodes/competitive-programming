#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin>>n;

    if(n>2){
        cout<<"Yes"<<endl;
        cout<<2<<" "<<1<<" "<<n<<endl;
        cout<<n-2<<" ";
        for(int i=2;i<=n-1;i++){
            cout<<i<<" ";
        }
    }else{
        cout<<"No";
    }

    return 0;
}
