#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    int n;

    cin>>n;

    int a[n];

    vector<int> x,y,z;
    
    for(int i=0;i<n;i++){

        cin>>a[i];
        if(a[i]==1){
            x.push_back(i+1);
        }else if(a[i]==2){
            y.push_back(i+1);
        }else{
            z.push_back(i+1);
        }

    }

    if(x.size() >= 1 && y.size() >= 1 && z.size() >= 1){

        int ans = min(x.size(),min(y.size(),z.size()));
        cout<<ans<<endl;
        
        for(int i=0;i<ans;i++){
            cout<<x[i]<<" "<<y[i]<<" "<<z[i]<<endl;
        }

    }else{
        cout<<0;
    }

    return 0;
}
