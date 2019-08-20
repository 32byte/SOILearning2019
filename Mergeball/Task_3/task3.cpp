#include <iostream>
#include <stack>

using namespace std;

/* SOI - Task 1
 * 
 * 20.8.2019
 * ~ 32byTe
 */
int main()
{
    /*Number of TestCases*/
    int T; cin >> T;
    for (int i = 0; i < T; i++)
    {
        /*Number of balls*/
        int N; cin >> N;
        
        stack<int> balls;

        for(int n = 0; n < N; n++)
        {
            int bi; cin >> bi;
            
            /*Merge the upper 2 balls (works because you can only merge balls that are next to eachother)*/
            while (balls.size() > 0 && bi == balls.top())   
            {
                balls.pop();
                bi *= 2;
            }

            balls.push(bi);
        } 
        /*if balls.size() > 1 :  it wasn't possible to merge all the balls into one*/
        if(balls.size() != 1)
            cout << "Case #" << i << ": Multiple\n";
        else
            cout << "Case #" << i << ": Single\n";
    }
    return 0;
}