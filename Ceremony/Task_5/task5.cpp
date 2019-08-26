#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main()
{
    int T; cin >> T;
    for(int t = 0; t < T; t++)
    {
        int N; cin >> N;

        vector<int> skyscrapers;
        for(int n = 0; n < N; n++)
        {
            int h; cin >> h;
            skyscrapers.push_back(h);
        }

        vector<int> left (N);
        stack<int> l;

        for(int i = 0; i < N; i++)
        {
            left[i] = l.size();
            
            while(l.size() != 0 && l.top() < skyscrapers[i])
                l.pop();

            if(l.size() == 0 || l.top() > skyscrapers[i])
                l.push(skyscrapers[i]);
        }

        vector<int> right (N);
        stack<int> r;

        for(int i = N -1; i >= 0; i--)
        {
            right[i] = r.size();
            
            while(r.size() != 0 && r.top() < skyscrapers[i])
                r.pop();

            if(r.size() == 0 || r.top() > skyscrapers[i])
                r.push(skyscrapers[i]);
        }

        int maxHeight = 0;
        for(int i = 0; i < N; i++)
        {
            int h = left[i] + right[i];
            if(h > maxHeight)
                maxHeight = h;
        }
        cout << "Case #" << t << ": " << maxHeight;
    }
    return 0;
}