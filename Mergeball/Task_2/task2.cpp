#include <iostream>

using namespace std;

int main()
{
    int T; cin >> T;
    
    for (int t = 0; t < T; t++)
    {
        int N; cin >> N;
        
        for (int i = 0; i < N; i++){
            int b;cin >> b;
        }
        
        if((N & (N-1)) == 0)
            cout << "Case #" << t << ": Single\n";
        else
            cout << "Case #" << t << ": Multiple\n";
    }
    return 0;
}