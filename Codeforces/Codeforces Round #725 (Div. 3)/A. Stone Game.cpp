#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

  int t;

  cin>>t;

  while(t--){

    int n, mini, maxi, mi = INT_MAX, ma = 0;
    
    cin>>n;
    
    int a[n+1];
    
    for(int i=1;i<=n;i++){

        cin>>a[i];

        if(a[i]<mi){
            mi = a[i];
            mini = i;
        }

        if(a[i]>ma){
            ma = a[i];
            maxi = i;
        }        

    }

    vector<int> ans;

    ans.push_back(max(mini,maxi));
    ans.push_back(max(n+1-mini,n+1-maxi));
    ans.push_back(mini+n+1-maxi);
    ans.push_back(maxi+n+1-mini);

    sort(ans.begin(),ans.end());

    cout<<ans[0]<<endl;


  }

  return 0;

}
