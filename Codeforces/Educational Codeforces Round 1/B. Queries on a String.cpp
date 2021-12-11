#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;

    cin>>s;

    int n;

    cin>>n;

    for(int i=0;i<n;i++){

        int l,r,k;

        cin>>l>>r>>k;

        l--;
        r--;

        int len = r-l+1;

        k%=len;

        reverse(s.begin()+l,s.begin()+l+len-k);
        reverse(s.begin()+l+len-k,s.begin()+l+len);
        reverse(s.begin()+l,s.begin()+l+len);

    }

    cout<<s;

    return 0;
}
