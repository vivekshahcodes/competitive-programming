#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    string a,b;

    cin>>a>>b;

    int x = b[0]-a[0];
    int y = b[1]-a[1];

    vector<string> ans;

    while(!(x==0 && y==0)){
        if(x<0 && y==0){
            ans.push_back("L");
            x++;
        }else if(x>0 && y==0){
            ans.push_back("R");
            x--;
        }else if(x==0 && y>0){
            ans.push_back("U");
            y--;
        }else if(x==0 && y<0){
            ans.push_back("D");
            y++;
        }else if(x>0 && y>0){
            ans.push_back("RU");
            x--;
            y--;
        }else if(x>0 && y<0){
            ans.push_back("RD");
            x--;
            y++;
        }else if(x<0 && y>0){
            ans.push_back("LU");
            x++;
            y--;
        }else{
            ans.push_back("LD");
            x++;
            y++;
        }
    }

    cout<<ans.size()<<endl;

    for(auto i:ans){
        cout<<i<<endl;
    }

    return 0;
}
