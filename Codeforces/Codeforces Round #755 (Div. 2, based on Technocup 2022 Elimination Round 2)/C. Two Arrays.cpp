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

        int a[n],b[n];

        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        for(int i=0;i<n;i++){
            cin>>b[i];
        }

        sort(a,a+n);
        sort(b,b+n);

        bool flag = true;

        for(int i=0;i<n;i++){
            if(b[i]-a[i]==0 || b[i]-a[i]==1){
                flag = true;
            }else{
                flag = false;
                break;
            }
        }

        if(flag){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}
