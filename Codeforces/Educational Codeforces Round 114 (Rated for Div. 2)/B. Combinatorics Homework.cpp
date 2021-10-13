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

        int arr[3],k;

        for(int i=0;i<3;i++){
            cin>>arr[i];

        }

        sort(arr,arr+3);

        cin>>k;

        int r = 0;

        for(int i=0;i<3;i++){
            r+=arr[i]-1;
        }

        int diff = arr[2]-(arr[0]+arr[1]);

        int l;

        if(diff<=1){
            l = 0;
        }else{
            l = diff-1;
        }

        if(k>=l && k<=r){
            cout<<"YES"<<"\n";
        }else{
            cout<<"NO"<<"\n";
        }

    }

    return 0;
}
