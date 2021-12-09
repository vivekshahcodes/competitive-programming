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

    sort(a,a+n);

    vector<int> v1,v2;

    for(int i=0;i<n;i++){
        if(i&1){
            v2.push_back(a[i]);
        }else{
            v1.push_back(a[i]);
        }
    }

    reverse(v2.begin(),v2.end());

    for(int i:v1){
        cout<<i<<" ";
    }

    for(int i:v2){
        cout<<i<<" ";
    }

    return 0;
}
