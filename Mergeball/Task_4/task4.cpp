#include <iostream>
#include <vector>

using namespace std;

/* SOI - Task 1
 * 
 * 17.8.2019
 * ~ 32byTe
 */
int main()
{
    /*Number of TestCases*/
    int T; cin >> T;
    for(int t = 0; t < T; t++)
    {
        /*Number of balls*/
        int N; cin >> N;
        /*Max size the balls can reach*/
        int C; cin >> C;
        /*The ballsize (N=1 so only one variable needed)*/
        int n; cin >> n;
        
        vector<int> sizes;

        while (n * 2 <= C)
        {
            sizes.push_back(n);
            n *= 2;
        }

        /*Print the output with the correct format*/
        cout << "Case #" << t << ": " << sizes.size()+1 << " ";
        for (int i : sizes)
            cout << i << " ";
        cout << n << "\n";
    }

    return 0;
}