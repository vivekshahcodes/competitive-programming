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

        int a[3];

        for(int i=0;i<3;i++){
            cin>>a[i];
        }

        sort(a,a+3);

        if(a[2]>=a[0]+a[1]){
            cout<<a[0]+a[1]<<endl;
        }else{
            cout<<(a[0]+a[1]+a[2])/2<<endl;
        }
        
    }

    return 0;
}
