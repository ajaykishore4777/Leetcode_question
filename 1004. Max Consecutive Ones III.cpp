class Solution {
public:
    int longestOnes(vector<int>& A, int K) {
        int left = 0, right = 0;
        int N = A.size();
        int ans = 0;
        int used = 0;
        
        while(right < N){
            if(left > 0 && A[left-1] == 0){
                used--;
            }
            //continue to look ahead when the A[right] is 1
            //, or A[right] is 0 but we still have quota to use
            while(right < N && (A[right] == 1 || used < K)){
                if(A[right] == 0 && used < K){
                    used++;
                }
                right++;
            }
            // cout << "[" << left << "," << right-1 << "]" << endl;
            ans = max(ans, right-left);
            left++;
        }
        return ans;
    }
};
