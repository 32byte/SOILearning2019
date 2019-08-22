#include <iostream>
#include <vector>

using namespace std;

/* SOI - Task 3
 * 
 * Works like task 1 & 2, but in both sides
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

        /*Vector with the heights of the skyscrapers (i < index)*/
        vector<int> skyscrapers;

        for(int n = 0; n < N; n++)
        {
            /*Get the Input*/
            int h; cin >> h;

            if(i < index)
                skyscrapers.push_back(h);

            /*Increase visible if the height is > than the max height*/
            if(h > height && i > index)
            {
                visible++;
                height = h;
            }

            i++;
        }

        /*Reset the height*/
        height = 0;

        for(int i = index-1; i >= 0; i--)
        {
            /*Increase visible if the height is > than the max height*/
            if(skyscrapers[i] > height)
            {
                visible++;
                height = skyscrapers[i];
            }
        }

        cout << "Case #" << t << ": " << visible << "\n";
    }
    return 0;
}