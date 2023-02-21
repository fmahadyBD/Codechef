/*----->>> Mahady Hasan Fahim
*/

#include<iostream>
#include<string>
using namespace std;
int main()
{
 int t;
 cin>>t;
 while (t--)
 {
    int a,b,c;
    cin>>a>>b>>c;
    if(a==b){
        cout<<0<<endl;
    }else if(a>b){
        cout<<((a-b)*c)<<endl;
    }
   else if(a-b==1){
        cout<<c<<endl;
    }
 }
   
   return 0;
}