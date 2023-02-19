/*----->>> Mahady Hasan Fahim
*/
//https://www.codechef.com/problems/EQUALDIST
#include<iostream>
#include<string>
using namespace std;
int main()
{
 int t;
 cin>>t;
 while(t--){
    int a,b;
    cin>>a>>b;
    if((a+b)%2==0){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
 }  
   return 0;
}