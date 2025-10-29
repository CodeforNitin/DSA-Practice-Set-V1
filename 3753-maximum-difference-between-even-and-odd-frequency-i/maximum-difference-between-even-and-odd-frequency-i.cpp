class Solution {
public:
    int maxDifference(string s) {
        int freq[26] = {0};

        for (char c : s) {
            freq[c - 'a']++;
        }

        int maxOdd = INT_MIN;
        int minEven = INT_MAX;
        bool hasOdd = false, hasEven = false;

        for (int i = 0; i < 26; i++) {
            if (freq[i] > 0) {
                if (freq[i] % 2 == 1) {
                    maxOdd = max(maxOdd, freq[i]);
                    hasOdd = true;
                } else {
                    minEven = min(minEven, freq[i]);
                    hasEven = true;
                }
            }
        }

        if (!hasOdd || !hasEven) return 0; // No valid difference
        return maxOdd - minEven;
    }
};
