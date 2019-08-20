#include <iostream>

using namespace std;

/* SOI - Task 1
 * 
 * 13.8.2019
 * ~ 32byTe
 */
int main()
{
    /*Number of TestCases*/
    int T; cin >> T;
    for (int t = 0; t < T; t++)
    {
        /*Number of balls and the ballsizes (always N=2)*/
        int N, b0, b1;
        cin >> N >> b0 >> b1;
        cout << "Case #" << t << ": " << (b0 + b1) << "\n";
    }
    return 0;
}
