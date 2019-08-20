#include <iostream>
#include <vector>

using namespace std;

/* SOI - Task 1
 * 
 * 16.8.2019
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

        vector<unsigned int> balls (N);
        for (int i = 0; i < N; i++)
            cin >> balls[i];

        while(1)
        {
            unsigned int index = 0;
            for (unsigned int i = 0; i < balls.size(); i++)
                if (balls[i] < balls[index])
                    index = i;

            if (index + 1 >= balls.size()){
                cout << "Case #" << i << ": Multiple\n";
                break;
            }

            if (balls[index+1] != balls[index]){
                cout << "Caseb #" << i << ": Multiple\n";
                break;
            }

            balls[index] *= 2;
            balls[index+1] = 0;
            vector<unsigned int> newBalls;
            for (unsigned int i = 0; i < balls.size(); i++) 
                if (balls[i] != 0)
                    newBalls.push_back(balls[i]);
            balls = newBalls;
            
            if(balls.size() == 1){
                cout << "Case #" << i << ": Single\n";
                break;
            }
        }
    }
}