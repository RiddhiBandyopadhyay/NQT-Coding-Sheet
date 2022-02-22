import java.util.*;

class Solve {
    boolean anagram(String s1, String s2) {
        if (s1.length() != s2.length()) {
            return false;
        }

        int[] freq = new int[26];
        for (int i = 0; i < s1.length(); i++) {
            freq[s1.charAt(i) - 'A']++;
            freq[s2.charAt(i) - 'A']--;
        }

        for (int i = 0; i < 26; i++) {
            if (freq[i] != 0)
                return false;
        }

        return true;
    }
}

public class anagram {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        String s1 = sc.nextLine();
        String s2 = sc.nextLine();
        Solve solve = new Solve();
        if (solve.anagram(s1, s2))
            System.out.println("YES");
        else
            System.out.println("NO");
    }
}
