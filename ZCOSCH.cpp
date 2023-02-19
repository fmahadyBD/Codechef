/*----->>> Mahady Hasan Fahim
*/
//https://www.codechef.com/problems/ZCOSCH
#include<iostream>
#include<string>
using namespace std;
int main()
{
 int a;
 cin>>a;
 if(a>=1&& a<=50){
    cout<<"100"<<endl;
 }  else if(a>50&&a<=100){
    cout<<"50"<<endl;
 }else{
    cout<<"0";
 }
   return 0;
}