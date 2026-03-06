#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        string S;
        cin >> N;
        cin >> S;

        for (int i = 0; i < N; i += 2) {
            if (S[i] == '0' && S[i+1] == '0') cout << 'A';
            else if (S[i] == '0' && S[i+1] == '1') cout << 'T';
            else if (S[i] == '1' && S[i+1] == '0') cout << 'C';
            else cout << 'G';
        }

        cout << endl;
    }

    return 0;
}
