#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    int n,k;
    
    cin>>n>>k;

    char curr = 'a';

    for(int i=0;i<n;i++){
        cout<<char(curr+(i%k));
    }

    return 0;
}
