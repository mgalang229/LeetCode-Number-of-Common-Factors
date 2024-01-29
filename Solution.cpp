class Solution {
public:
    int commonFactors(int a, int b) {
        int fact[max(a, b)+1];
        memset(fact, 0, sizeof(fact));
        for (int i = 1; i * i <= a; i++) {
            if (a % i == 0) {
                fact[i] = 1;
                if (a / i != i)
                    fact[a/i] = 1;
            }
        }
        for (int i = 1; i * i <= b; i++) {
            if (b % i == 0) {
                fact[i] += 1;
                if (b / i != i) {
                    fact[b/i] += 1;
                }
            }
        }
        int cnt = 0;
        for (int i = 1; i <= max(a, b); i++)
            cnt += (fact[i] == 2);
        return cnt;
    }
};
