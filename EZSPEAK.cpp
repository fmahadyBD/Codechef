/*----->>> Mahady Hasan Fahim
 */
//https://www.codechef.com/problems/EZSPEAK
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, c = 0;
        cin >> a;
        string s;
        cin >> s;
        for (int i = 0; i < a; i++)
        {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
            {
                c = 0;
            }
            else
            {
                c++;
                if (c== 4)
                {

                    break;
                }
            }
        }
            if(c<4){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
    }
    return 0;
}