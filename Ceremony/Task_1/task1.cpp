#include <iostream>

using namespace std;

/* SOI - Task 1
 * 
 * 22.8.2019
 * ~ 32byTe
 */
int main()
{
    /*Number of TestCases*/
    int T; cin >> T;
    for(int t = 0; t < T; t++)
    {
        /*Number of skyscrapers, index*/
        int N, index;
        cin >> N >> index;

        /*Number of visible skyscrapers*/
        int visible = 0;

        /*The height of the curret highest skyscraper*/
        int height = 0;

        /*index of the curret skyscraper*/
        int i = 0;

        for(int n = 0; n < N; n++)
        {
            int h; cin >> h;

            if((h > height || i == index + 1) && i != index)
            {
                visible++;
                height = h;
            }

            i++;
        }

        cout << "Case #" << t << ": " << visible << "\n";
    }
    return 0;
}