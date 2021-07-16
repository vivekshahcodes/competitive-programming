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
    
    int l=0,r=n-1,ser=0,dim=0;
    bool f = true;

    while(l<=r){
        if(f){
            f = false;
            if(a[l]>a[r]){
                ser+=a[l];
                l++;
            }else{
                ser+=a[r];
                r--;
            }
        }else{
            f = true;
            if(a[l]>a[r]){
                dim+=a[l];
                l++;
            }else{
                dim+=a[r];
                r--;
            }
        }
    }

    cout<<ser<<" "<<dim;

    return 0;
}
