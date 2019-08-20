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
        /*Number of balls*/
        int N; cin >> N;
        
        /*Cin the ballsizes, not used because they are not needed*/
        for (int i = 0; i < N; i++){
            int b; cin >> b;
        }
        
        /*Check if N is a power of 2*/
        if((N & (N-1)) == 0)
            cout << "Case #" << t << ": Single\n";
        else
            cout << "Case #" << t << ": Multiple\n";
    }
    return 0;
}