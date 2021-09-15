#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin>>n;

    int curr = 0;

    int a[8];

    for(int i=1;i<=7;i++){
        cin>>a[i];
    }

    int i = 0;

    while(curr<n){
        for(i=1;i<=7;i++){
            curr+=a[i];
            if(curr>=n){
                break;
            }
        }
    }

    cout<<i;

    return 0;
}
