/*----->>> Mahady Hasan Fahim
*/
//https://www.codechef.com/problems/COMPRESSVD
#include<iostream>
#include<string>
using namespace std;
int main()
{
   int t;
   cin>>t;
   while(t--){
    int a,c=0;
    cin>>a;
    int x[a];
    for(int i=0;i<a;i++){
        cin>>x[i];
        c++;
        if(i>0){
            if(x[i]==x[i-1]){
                c--;
            }
        }
    }
    cout<<c<<endl;
   }
   return 0;
}