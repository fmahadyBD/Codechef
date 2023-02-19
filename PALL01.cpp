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
        string a;
        int c = 0;
        cin >> a;
        for (int i = 0; i < a.length() / 2; i++)
        {
            if (a[i] == a[a.length()  / 2 + i])
            {
                c++;
            }
        }
        if (c == a.length()  / 2)
        {
            cout << "loses" << endl;
        }
        else
        {
            cout << "wins" << endl;
        }
    }
    return 0;
}