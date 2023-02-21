/*----->>> Mahady Hasan Fahim
*/
//https://www.codechef.com/problems/HELIUM3
#include<iostream>
#include<string>
using namespace std;
int main()
{
   int t;
   cin>>t;
   while(t--){
   
   int a,b,x,y;
   cin>>a>>b>>x>>y;
   int tp=a*b;
   int pp=x*y;
   if(pp>=tp){
    cout<<"YES"<<endl;
   }else {
    cout<<"NO"<<endl;
   }
   
 }
   return 0;
}