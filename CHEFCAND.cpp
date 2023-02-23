/*----->>> Mahady Hasan Fahim
*/

#include<iostream>
#include<string>
using namespace std;
int main()
{
   int t;
   cin>>t;
   while(t--){
   
   int n,x;
   cin>>n>>x;
   if(x>=n){
       cout<<0<<endl;
   }else{
   int r=n-x;
   if(r%4==0)
   cout<<r/4<<endl;
   else
   cout<<(r/4)+1<<endl;
   }
 }
   return 0;
}