/*----->>> Mahady Hasan Fahim
 */

#include <iostream>
#include <string>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int l, bo;
        cin >> l >> bo;
        int a, b;
        a = 1;
        b = 2;
        while (true)
        {
            a++;
            b++;
            if(a==l || b==bo){
                break;
            }
        }
        if (a == l)
        {
            cout << "Limak" << endl;
        }
        else if (b == bo)
        {
            cout << "Bob" << endl;
        }
    }
    return 0;
}