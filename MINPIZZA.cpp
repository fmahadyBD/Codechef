/*----->>> Mahady Hasan Fahim
 */
//https://www.codechef.com/problems/MINPIZZA
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        if((a*b)%4!=0){
           
            cout<<(a*b)/4+1<<endl;
        }else
            cout<<(a*b)/4<<endl;
    }
        return 0;
}