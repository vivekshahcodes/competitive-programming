#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    int n;

    cin>>n;

    int a[n+1];

    for(int i=1;i<=n;i++){
        cin>>a[i];
    }

    int x, y, minDist = INT_MAX;

    for(int i=1;i<=n-1;i++){
        if(abs(a[i]-a[i+1])<minDist){
            minDist = abs(a[i]-a[i+1]);
            x = i;
            y = i+1;
        }
    }

    if(abs(a[n]-a[1])<minDist){
        x = n;
        y = 1;
    }

    cout<<x<<" "<<y;

    return 0;
}
