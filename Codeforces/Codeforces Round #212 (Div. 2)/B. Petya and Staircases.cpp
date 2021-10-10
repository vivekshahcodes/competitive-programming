#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,k;

    cin>>n>>k;

    int a[k];

    for(int i=0;i<k;i++){
        cin>>a[i];
    }

    sort(a,a+k);

    if(a[0]==1 || a[k-1]==n){
        cout<<"NO";
    }else{
        bool flag = true;
        for(int i=0;i<k-2;i++){
            if(a[i+2]-a[i]==2){
                flag = false;
                break;
            }
        }

        if(flag){
            cout<<"YES";
        }else{
            cout<<"NO";
        }
    }

    return 0;
}
