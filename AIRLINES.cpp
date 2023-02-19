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
    int x,y,z;
     int money;
    cin>>x>>y>>z;
    int sit=10*x;
    if(y<=sit){
     money=y*z;
    }
    else{
     money=sit*z;
    }
    cout<<money<<endl;
 }  
   return 0;
}