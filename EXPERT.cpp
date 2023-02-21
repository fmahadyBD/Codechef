/*----->>> Mahady Hasan Fahim
 */
// https://www.codechef.com/problems/EXPERT
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
       float x, y;
        cin >> x >> y;
        float p1 = (y) / x;
        float p = (p1)*100;
       
        if (p >= 50)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}