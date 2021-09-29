#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin>>n;

    map<int,int> m;
    int a[n];
    bool ans = true;

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    for(int i=0;i<n;i++){
        
        if(a[i]==25){
            m[25]++;
        }else if(a[i]==50){
            if(m[25]>0){
                m[25]--;
                m[50]++;
            }else{
                ans = false;
                break;
            }
        }else{
            if(m[50]>0 && m[25]>0){
                m[50]--;
                m[25]--;
                m[100]++;
            }else if(m[25]>2){
                m[25]-=3;
                m[100]++;
            }else{
                ans = false;
            }
        }

    }    
    
    if(ans){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    
    return 0;
}
