#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    int n;

    cin>>n;

    int mi=INT_MAX, ma = 0, minInd, maxInd;

    for(int i=0;i<n;i++){
        
        int input;

        cin>>input;

        if(input>ma){
            ma = input;
            maxInd = i;
        }

        if(input<=mi){
            mi = input;
            minInd = i;
        }
    }

    int ans = maxInd + (n-1-minInd);

    if(maxInd>minInd){
        ans--;
    }

    cout<<ans;

    return 0;
}
