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

        int a[n];

        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        bool flag = true;

        for(int i=1;i<n;i++){
            if(__gcd(a[i],a[i-1])!=a[i]){
                flag = false;
                break;
            }
        }

        if(flag){
            for(int i=0;i<n;i++){
                cout<<a[i]<<" ";
            }
            cout<<endl;
        }else{
            cout<<-1<<endl;
        }
    }

    return 0;
}
