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
        
        bool flag = false;

        for(int i=0;i<n-2;i++){
            for(int j=i+2;j<n;j++){
                if(a[i]==a[j]){
                    flag = true;
                    break;
                }
            }

            if(flag){
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
