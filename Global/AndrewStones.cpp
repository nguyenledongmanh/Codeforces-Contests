#include <iostream>
using namespace std;

void input(long long A[], int n) {
    for (int i = 0; i < n; i++)
        cin >> A[i];
}

int main() {
    int testcase;
    cin >> testcase;
    while (testcase--) {
        int n;
        cin >> n;
        long long A[n];
        input(A, n);
        if (n == 3) {
            if (A[1] % 2 != 0)
                cout << -1;
            else
                cout << (long long)A[1] / 2;
        }
        else {
            long long flag = 0;
            bool check = false;
            for (int i = 1; i < n - 1; i++) {
                if (A[i] >= 2)
                {
                    check = true;
                    break;
                }
            }

            if (check) {
                for (int i = 1; i < n - 1; i++)
                    if (A[i] % 2 == 0)
                        flag += A[i] / 2;
                    else
                        flag += (A[i] + 1) / 2;
                cout << flag;
            }
            else
                cout << -1;
        }
        cout << endl;
    }
    return 0;
}