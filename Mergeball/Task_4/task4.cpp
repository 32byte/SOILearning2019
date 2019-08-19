#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int T; cin >> T;
    for(int t = 0; t < T; t++)
    {
        int N; cin >> N;
        int C; cin >> C;
        int n; cin >> n;
        
        vector<int> sizes;

        while (n * 2 <= C)
        {
            sizes.push_back(n);
            n *= 2;
        }

        cout << "Case #" << t << ": " << sizes.size()+1 << " ";
        for (unsigned int i = 0; i < sizes.size(); i++)
            cout << sizes[i] << " ";
        cout << n << "\n";
    }

    return 0;
}