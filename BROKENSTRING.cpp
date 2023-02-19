/*----->>> Mahady Hasan Fahim
 */
//https://www.codechef.com/problems/BROKENSTRING?tab=statement
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int a,c=0;
        cin >> a;
        char ar[a];
            cin>>ar;
        for (int i = 0;i<a/2; i++)
        {
            if (ar[i] == ar[(a / 2) + i])
            {
                c++;
            }
        }
        if (c == (a / 2)){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}