#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

bool isGood(int p[]){

    for(int i=0;i<5;i++){
        if(p[i+1]>p[i]){
            return false;
        }
    }

    return true;
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int p[6] = {0};
    int b[] = {4,8,15,16,23,42};

    int n;

    cin>>n;

    int a[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    bool flag = true;
    int ind = 1;

    for(int i=0;i<n;i++){
        for(int j=0;j<6;j++){
            if(a[i]==b[j]){
                p[j]++;
                if(!isGood(p)){
                    p[j]--;
                    a[i] = 0;
                }
            }
        }
    }

    int ans = INT_MAX;

    for(int i=0;i<6;i++){
        ans = min(ans,p[i]);
    }

    cout<<n-(6*ans);

    return 0;
}
