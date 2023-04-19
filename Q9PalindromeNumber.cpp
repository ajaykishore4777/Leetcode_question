class Solution {
public:
    bool isPalindrome(int x) {
        int a=x;
        if(a<0) return false;
        long int ans = 0 ;
        while(a!=0){
        int digit=a%10;
        ans = (ans*10)+digit;
        a=a/10;
        }
    
        if(ans==x) return true;
        else  return false;   
}};  
    
