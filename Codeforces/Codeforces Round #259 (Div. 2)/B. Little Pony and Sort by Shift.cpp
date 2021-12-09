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

    int c = 0;
    int ind = 0;

    for(int i=0;i<n-1;i++){
        if(a[i+1]<a[i]){
            ind = i+1;
            c++;
        }
    }

    if(c>1){
        cout<<-1;
    }else if(c==0){
        cout<<0;
    }else{
        if(a[0]<a[n-1]){
            cout<<-1;
        }else{
            cout<<n-ind;
        }
    }

    return 0;
}
