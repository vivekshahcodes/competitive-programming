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

        if(a[0]+a[1]+1>=a[2]){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
    }

    return 0;
}
