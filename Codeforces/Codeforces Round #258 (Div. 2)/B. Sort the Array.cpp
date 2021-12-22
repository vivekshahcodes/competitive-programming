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

    int l = 1, r = 1;

    bool start = false;

    for(int i=0;i<n-1;i++){
        if(a[i]>a[i+1] && !start){
            start = true;
            l = i+1;
        }else if(a[i]<a[i+1] && start){
            r = i+1;
            start = false;
            break;
        }
    }

    if(start){
        r = n;
    }

    reverse(a+l-1,a+r);

    bool flag = true;

    for(int i=0;i<n-1;i++){
        if(a[i]>a[i+1]){
            flag = false;
            break;
        }
    }

    if(flag){
        cout<<"yes\n";
        cout<<l<<" "<<r;
    }else{
        cout<<"no";
    }

    return 0;
}
