#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin>>n;

    char curr = 'a';

    for(int i=0;i<n;i++){
        cout<<curr;
        curr++;
        if(curr=='e'){
            curr = 'a';
        }
    }

    return 0;
}
