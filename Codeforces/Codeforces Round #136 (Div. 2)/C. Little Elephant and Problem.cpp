#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin>>n;

    int a[n],b[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
        b[i] = a[i];
    }

    sort(b,b+n);

    int counter = 0;

    for(int i=0;i<n;i++){
        if(a[i]!=b[i]){
            counter++;
        }
    }

    if(counter>2){
        cout<<"NO";
    }else{
        cout<<"YES";
    }

    return 0;
}
