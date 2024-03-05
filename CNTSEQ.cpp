
#include <bits/stdc++.h>

using namespace std;

const int MAX_N = 1500;
const int INF = 1e9+7;
int n, k, a[MAX_N], F[MAX_N][55];

int main() {
    //freopen("CNTSEQ.INP","r",stdin);
    //freopen("CNTSEQ.OUT","w",stdout);

    // Đọc số nguyên n và k từ bàn phím
    cin >> n >> k;

    // Đọc dãy số a từ bàn phím và lấy phần dư cho k
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        a[i] %= k;
    }

    // Khởi tạo mảng F
    for (int i = 1; i < k; i++) {
        F[1][i] = -INF;
    }
    F[1][a[1]] = 1;

    // Tính toán mảng F
    for (int i = 2; i <= n; i++) {
        for (int j = 0; j < k; j++) {
            F[i][j] = max(F[i-1][j], F[i-1][(j-a[i]+k)%k] + 1);
        }
    }

    // In ra kết quả
    cout << F[n][0] << endl;

    return 0;
}

