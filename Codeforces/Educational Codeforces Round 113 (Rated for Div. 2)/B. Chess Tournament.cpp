#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

  int t;

  cin>>t;

  while(t--){

    int n;

    cin>>n;

    string s;

    cin>>s;

    char ans[n][n];

    vector<int> v;

    for(int i=0;i<s.length();i++){
        if(s[i]=='2'){
            v.push_back(i);
        }
    }

    if(v.size()>0 && v.size()<3){
        cout<<"NO"<<endl;
    }else if(v.size()!=0){

        map<int,int> m;

        for(int i=0;i<v.size()-1;i++){
            m[v[i]] = v[i+1];
        }

        m[v[v.size()-1]] = v[0];

        cout<<"YES"<<endl;

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i==j){
                    ans[i][i] = 'X';
                }else{
                    if(s[i]=='1'){
                        ans[i][j] = '=';
                    }else{
                        if(s[j]=='1'){
                            ans[i][j] = '=';
                        }else{
                            ans[i][j] = '=';
                        }
                    }
                }
            }
        }

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(s[i]=='2'){
                    ans[i][m[i]] = '+';
                    ans[m[i]][i] = '-';
                }
            }
        }

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<ans[i][j];
            }
            cout<<endl;
        }

    }else{

        cout<<"YES"<<endl;

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i==j){
                    cout<<'X';
                }else{
                    cout<<'=';
                }
            }
            cout<<endl;
        }
    }

  }

  return 0;

}
