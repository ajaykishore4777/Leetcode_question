class Solution {
public:
    int minOperations(int n) {
        int median;
        
        if(n&1){
            //odd
            int mi = n/2;
            median = 2*mi+1;
            // cout << mi << ", " << median << endl;
            return median*mi - ((1+2*mi-1)*mi>>1);
        }
        
        //even
        median = 2*(n/2-1)+1+1;
        // cout << median << endl;
        return median*n/2 - ((1+(2*(n/2-1)+1))*(n>>1)>>1);
    }