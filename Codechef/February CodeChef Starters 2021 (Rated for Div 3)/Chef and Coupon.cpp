#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

  int t;

  cin>>t;

  while(t--){

    int d,c;

    cin>>d>>c;

    int e,f,g,h,i,j;

    cin>>e>>f>>g>>h>>i>>j;

    int initialCost = e+f+g+h+i+j+2*d, finalCost = initialCost;

    if(e+f+g>=150 && h+i+j>=150){
        finalCost += c-2*d;
    }else if(e+f+g>=150 || h+i+j>=150){
        finalCost += c-d;
    }

    if(finalCost<initialCost){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }


  }

  return 0;

}
