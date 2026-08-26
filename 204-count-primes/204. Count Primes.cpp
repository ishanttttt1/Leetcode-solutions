class Solution{
public:
    int countPrimes(int n){
        if (n <= 2) return 0;
        vector<bool> isComposite(n, false);
        int count = 1;
        for (int i = 3; i * i < n; i += 2){
            if (!isComposite[i]){
                for (int j = i * i; j < n; j += 2 * i) {
                    isComposite[j] = true;
                }
            }
        }
        for (int i = 3; i < n; i += 2){
            if (!isComposite[i]){
                count++;
            }
        }
        return count;
    }
};