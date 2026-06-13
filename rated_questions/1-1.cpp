#include<bits/stdc++.h>

using namespace std;

int main(){
   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   int t=0;
  cin>>t;

  while(t--){
     int n=0;
     cin>>n;
     string s;
     cin>>s;
    for(int i=1;i<n-1;i++){
        if(s[i-1]=='1'&&s[i+1]=='1'){
            s[i]='1';
        }
    }
    int one=0;
    int zero=0;
    for(int i=0;i<n;i++){
        if(s[i]=='1')
        one++;
    }
    for(int i=1;i<n-1;i++){
         if(s[i-1]=='1'&&s[i+1]=='1'){
            s[i]='0';
        }
    }
    for(int i=0;i<n;i++){
        if(s[i]=='1')
        zero++;
    }
    cout<<zero<<" "<<one<<endl;
    
     


    
  }

  
  
  return 0;
  }
