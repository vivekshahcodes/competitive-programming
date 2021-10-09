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

    if(a[n-2]+a[n-3]<=a[n-1]){
        cout<<"NO";
    }else{
        cout<<"YES"<<endl;
        vector<int> v1;
        vector<int> v2;

        bool flag = true;
        for(int i=n-1;i>=0;i--){
            if(flag){
                v2.push_back(a[i]);
                flag = false;
            }else{
                v1.push_back(a[i]);
                flag = true;
            }
        }

        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end(),greater<int>());

        for(int i:v1){
            cout<<i<<" ";
        }

        for(int i:v2){
            cout<<i<<" ";
        }
    }

    return 0;
}
