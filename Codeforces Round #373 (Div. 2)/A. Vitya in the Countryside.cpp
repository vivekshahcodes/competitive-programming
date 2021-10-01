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
    
    if(n==1 && a[0]==0){
        cout<<"UP";
    }else if(n==1 && a[0]==15){
        cout<<"DOWN";
    }else if(n>1){
        if(a[n-1]==0 || (a[n-2]<a[n-1] && a[n-1]!=15)){
            cout<<"UP";
        }else{
            cout<<"DOWN";
        }
    }else{
        cout<<-1;
    }

    return 0;
}
