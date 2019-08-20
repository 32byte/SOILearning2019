#include <iostream>
#include <vector>

using namespace std;

/* SOI - Task 5
 * 
 * 19.8.2019
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
		/*the maximum ballsize*/
		__int64_t C; cin >> C;

		/*Array with ballsizes*/
		vector<__int64_t> balls;

		/*Load the ballsizes*/
		for(int n = 0; n < N; n++)
		{
			__int64_t bi; cin >> bi;
			balls.push_back(bi);
		}

		/*Output-array*/
		vector<__int64_t> out;

		while(out.size() == 0 || out[out.size()-1] < C)
		{
			/*Index of the smallest ball*/
			int sm_index = -1;

			/*Find the smallest index*/
			for(unsigned int i = 0; i < balls.size(); i++)
				if (sm_index == -1 || balls[i] < balls[sm_index])
					sm_index = i;
 
			/*Break if the smallest value is above the maximum*/
			if(balls[sm_index] > C)
				break;

			/*Add the value to the output if it is bigger than the last one*/
			if(out.size() == 0 || (out[out.size()-1] < balls[sm_index] && balls[sm_index] < C))
				out.push_back(balls[sm_index]);
			
			/*"Combine" the balls by multiplying*/
			balls[sm_index] *= 2;
		}

		/*Print the output with the correct fromat*/
		cout << "Case #" << t << " " << out.size();
		for(int i : out)
			cout << " " << i;
		cout << "\n";
	}
	return 0;
}
