#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

bool compare(string a, string b){
    return a.length()<b.length();
}

int main(){

    int n;

    cin>>n;

    string a[n];
    bool flag = true;

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    sort(a,a+n,compare);

    if(n==1){
        cout<<"YES"<<endl;
        cout<<a[0];
    }else{
        for(int i=0;i<n-1;i++){
            if(a[i]!=a[i+1]){
                if(a[i+1].find(a[i]) != string::npos){
                    flag = true;
                }else{
                    flag = false;
                    break;
                }
            }
        }

        if(flag){
            cout<<"YES"<<endl;
            for(int i=0;i<n;i++){
                cout<<a[i]<<endl;
            }
        }else{
            cout<<"NO";
        }
    }


    return 0;
}
