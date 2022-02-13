#include <bits/stdc++.h>

using namespace std;

bool check(long long A[], int n) {
    long long checkSorted[n];
    for (int i = 0; i < n; i++)
        checkSorted[i] = A[i];
    sort(A, A + n);
    for (int i = 0; i < n; i++)
        if (A[i] != checkSorted[i])
            return false;
    return true;
}

void inputVal(long long A[], int n) {
    for (int i = 0; i < n; i++)
        cin >> A[i];
}

int main() {
    int testcase;
    cin >> testcase;
    while (testcase--) {
        int n;
        cin >> n;
        long long input[n];
        inputVal(input, n);
        check(input, n) ? cout << "NO" : cout << "YES";
        cout << endl;
    }
    return 0;
}