#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin>>n;

    int a[n];
    
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    int t,cost=INT_MAX;

    for(int i=1;i<=100;i++){
        int curr = 0;
        for(int j=0;j<n;j++){
            if(abs(a[j]-i)>1){
                curr += abs(a[j]-i)-1;
            }
        }

        if(curr<cost){
            cost = curr;
            t = i;
        }
    }

    cout<<t<<" "<<cost;

    return 0;
}
