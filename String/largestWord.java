import java.util.*;

class Solve{
    String maxLength(String str) {
        int len = str.length();
        int i = 0, j = 0;
        String maxWord="";
        int max_length = 0, max_start = 0;

        while (j <= len) {
               if (j < len && str.charAt(j) != ' ')
                      j++;

               else {
                      int curr_length = j - i;

                      if (curr_length > max_length) {
                             max_length = curr_length;
                             max_start = i;
                      }
                      j++;
                      i = j;
               }
        }

        maxWord = str.substring(max_start, max_length);
        return maxWord;
    }
}

public class largestWord {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        Solve solve = new Solve();
        String ans = solve.maxLength(s);
        System.out.println(ans);
    }
}
