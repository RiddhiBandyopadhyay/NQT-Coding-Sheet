import java.util.*;

class Solution{
    int solve(int n){
    //204
    //214
        if(n == 0) return 1;
        
        int ans = 0, mult = 1;
        int remain = 0;

        while(n > 0){
            remain = n % 10;
            if(remain == 0){
                //replace
                ans += mult * 1;
            }
            else{
                ans += mult * remain;
            }
            mult = mult * 10;
            n = n / 10;
        }

        return ans;
    }
}

class Replace01{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int input = sc.nextInt();
        Solution sol = new Solution();
        System.out.println(sol.solve(input));
    }
}