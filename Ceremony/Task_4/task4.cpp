#include <iostream>
#include <vector>

using namespace std;

/* SOI - Task 4
 * 
 * Basicly works like 3, just bruteforces it
 * 
 * 22.8.2019
 * ~ 32byTe
 */

/*Returns the number of visible skyscrapers*/
int getVisible(vector<int> skyscrapers, int index)
{
    /*Number of visible skyscrapers*/
    int visible = 0;

    /*The height of the curret highest skyscraper*/
    int height = 0;

    for(unsigned int i = index+1; i < skyscrapers.size(); i++)
    {
        /*Increase visible if the height is > than the max height*/
        if(skyscrapers[i] > height)
        {
            height = skyscrapers[i];
            visible++;
        }
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
    return visible;
}

int main()
{
    /*Number of TestCases*/
    int T; cin >> T;
    for(int t = 0; t < T; t++)
    {
        /*Number of skyscrapers, index*/
        int N; cin >> N;

        /*Vector with the heights of the skyscrapers (i < index)*/
        vector<int> skyscrapers;

        for(int n = 0; n < N; n++)
        {
            /*Get the Input*/
            int h; cin >> h;
            skyscrapers.push_back(h);
        }

        int maxVisible = 0;

        for(unsigned int i = 0; i < skyscrapers.size(); i++)
        {
            int visible = getVisible(skyscrapers, i);
            if(visible > maxVisible)
                maxVisible = visible;
        }

        cout << "Case #" << t << ": " << maxVisible << "\n";
    }
    return 0;
}