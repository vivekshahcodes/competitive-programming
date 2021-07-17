#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    int n;

    cin>>n;

    int curr =  0, incr = 1, total = 0;

    while(total<=n){
        curr += incr;
        total += curr;
        incr++;
    }

    cout<<incr-2;

    return 0;
}
