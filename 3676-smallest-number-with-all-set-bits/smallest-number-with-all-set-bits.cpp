class Solution {
public:
    int smallestNumber(int n) {
        int ans=0;
        for(int i=0;i<=10;i++){
            double result = pow(2, i);
            ans = ans + int(result);
            if (ans >=n) break;
        }

        return ans;
    }
};