import java.util.Scanner;

class Solve{
    boolean isPalindrome(String s){
        int start = 0;
        int end = s.length() - 1;
        while(start <= end){
            if(s.charAt(start++) != s.charAt(end--)){
                return false;
            }
        }
        return true;
    }
}

class Palindrome{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        String s = sc.next();
        Solve solve = new Solve();
        if(solve.isPalindrome(s)){
            System.out.println("YES");
        }
        else{
            System.out.println("NO");
        }
    }
}
