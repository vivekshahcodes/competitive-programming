#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    int n;

    cin>>n;

    int left = 0, right = 0;

    for(int i = 0; i < n; i++){
        
        int l,r;

        cin>>l>>r;

        left += l;
        right += r;

    }

    cout<<min(left,n-left)+min(right,n-right);

    return 0;
}
