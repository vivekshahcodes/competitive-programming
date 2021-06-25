#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    int n;

    cin>>n;

    double sum = 0;

    for(int i=0;i<n;i++){
        double input;
        cin>>input;
        sum+=input;
    }

    cout<<fixed<<setprecision(12)<<sum/n;

    return 0;
}
