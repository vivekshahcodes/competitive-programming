#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    int n;

    cin>>n;

    int a[n];
    
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    set<int> s;

    int prev = 0,c = 0;

    for(int i=n-1;i>=0;i--){
        s.insert(a[i]);
        if(s.size()==prev){
            a[i] = 0;
            c++;
        }else{
            prev++;
        }

    }

    cout<<n-c<<endl;

    for(int i=0;i<n;i++){
        if(a[i]!=0){
            cout<<a[i]<<" ";
        }
    }    



    return 0;
}
