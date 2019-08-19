#include <iostream>

using namespace std;

int main()
{
    int T; cin >> T;
    for (int t = 0; t < T; t++)
    {
        int N, b0, b1;
        cin >> N >> b0 >> b1;
        cout << "Case #" << t << ": " << (b0 + b1) << "\n";
    }
    return 0;
}
