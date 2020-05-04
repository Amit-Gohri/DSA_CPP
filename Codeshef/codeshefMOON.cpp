#include<iostream>
using namespace std;
int main() {
    int test_case(0);
    cin >> test_case;
label:
    while (test_case--) {
        int N(0), M(0), X(0), Y(0);
        cin >> N >> M >> X >> Y;
        int t1(0), c1(0);
        for (t1 = 0; t1 <= N; t1++) {
            for (c1 = 0; c1 <= M; c1++) {
                int sweetness1 = t1 * X + c1 * Y;
                int sweetness2 = (N - t1) * X + (M - c1) * Y;
                if (sweetness1 == sweetness2) {
                    cout << "YES\n";
                    goto label;

                }

            }
        }
        cout << "NO\n";
        goto label;
    }
}
// submited on codeshef problem