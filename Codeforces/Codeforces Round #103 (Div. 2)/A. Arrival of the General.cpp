#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    int n, maxElement = 0, minElement = INT_MAX, maxIndex, minIndex;

    cin>>n;

    int a[n];
    
    for(int i=0;i<n;i++){

        cin>>a[i];
        if(a[i]>maxElement){
            maxElement = a[i];
            maxIndex = i;
        }

        if(a[i]<=minElement){
            minElement = a[i];
            minIndex = i;
        }

    }

    int ans = maxIndex + (n-minIndex-1);

    if(minIndex<maxIndex){
        ans--;
    }

    cout<<ans;

    return 0;
}
