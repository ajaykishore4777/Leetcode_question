class Solution {
public:
    string thousandSeparator(int n) {
        if(n == 0) return "0";
        
        string ans = "";
        
        while(n){
            string tmp = to_string(n%1000);
            /*
            need to pad 0 for the case:
            51040
            */
            if(tmp.size() < 3 && n >= 1000){
                tmp = string(3-tmp.size(), '0') + tmp;
            }
            if(ans.empty()){
                ans = tmp;
            }else{
                ans = tmp + "." + ans;
            }
            n /= 1000;
            // cout << ans << endl;
        }
        
        return ans;
    }
};