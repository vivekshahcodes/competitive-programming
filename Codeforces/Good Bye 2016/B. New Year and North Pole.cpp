#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin>>n;

    int x = 0;

    bool ans = true;

    for(int i=0;i<n;i++){

        int d;
        string dir;
        cin>>d>>dir;

        if((x==0 && dir!="South")||(x==20000 && dir!="North")){
            ans = false;
            break;
        }

        if(dir=="North"){
            x -= d;
        }else if(dir=="South"){
            x += d;
        }

        if(x<0 || x>20000){
            ans = false;
            break;
        }
    }

    if(x!=0){
        ans = false;
    }

    if(ans){
        cout<<"YES";
    }else{
        cout<<"NO";
    }

    return 0;
}
