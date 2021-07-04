#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    int n, minScore, maxScore, ans = 0;

    cin>>n;

    int a[n];
    
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    minScore = maxScore = a[0];

    for(int i=1;i<n;i++){
        if(a[i]>maxScore){
            ans++;
            maxScore = a[i];
        }

        if(a[i]<minScore){
            ans++;
            minScore = a[i];
        }
    }

    cout<<ans;

    return 0;
}
