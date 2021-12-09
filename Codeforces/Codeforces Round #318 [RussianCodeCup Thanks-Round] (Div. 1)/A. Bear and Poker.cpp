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

    set<int> s;

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    bool flag = true;

    for(int i=0;i<n;i++){

        while(a[i]%6==0){
            a[i]/=6;
        }

        while(a[i]%2==0){
            a[i]/=2;
        }

        while(a[i]%3==0){
            a[i]/=3;
        }

        s.insert(a[i]);

        if(s.size()==2){
            flag = false;
            break;
        }
    }

    if(flag){
        cout<<"Yes";
    }else{
        cout<<"No";
    }

    return 0;
}
