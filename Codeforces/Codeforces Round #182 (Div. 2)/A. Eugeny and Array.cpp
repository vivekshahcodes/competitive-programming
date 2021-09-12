#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);

    int n,q;

    cin>>n>>q;

    int a = 0, b = 0;

    for(int i=0;i<n;i++){
        int input;
        cin>>input;

        if(input==1){
            a++;
        }else{
            b++;
        }
    }

    int arr[n+1];

    for(int i=0;i<=n;i++){
        if(i&1){
            arr[i] = 0;
        }else{
            if(a>=i/2 && b>=i/2){
                arr[i] = 1;
            }else{
                arr[i] = 0;
            }
        }
    }

    while(q--){

        int l,r;
        cin>>l>>r;

        int x = r-l+1;

        cout<<arr[x]<<"\n";

    }

    return 0;
}
