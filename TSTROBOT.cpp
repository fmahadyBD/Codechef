#include <bits/stdc++.h>
using namespace std;

int main() {
int t;
cin>>t;
while(t--){
    int n,x;
    cin>>n>>x;
      unordered_set<int> u;
     u.insert(x);
    char s[n];
    for(int i=0;i<n;i++){
        cin>>s[i];
        if(s[i]=='R'){
            x++;
            u.insert(x);
        }else if(s[i]=='L'){
            x--;
            u.insert(x);
        }
    }
    cout<<u.size()<<endl;
}
	return 0;
}
