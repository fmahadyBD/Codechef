/*----->>> Mahady Hasan Fahim
*/
//https://www.codechef.com/problems/AMR15A
#include<iostream>
#include<string>
using namespace std;
int main()
{
   int a,e=0,o=0;
   cin>>a;
   int ar[a];
   for(int i=0;i<a;i++){
    cin>>ar[i];
    if(ar[i]%2==0){
        e++;
    }else {
        o++;
    }

   }
   if(e>o){
    cout<<"READY FOR BATTLE"<<endl;
   }else{
    cout<<"NOT READY"<<endl;

   }
   return 0;
}