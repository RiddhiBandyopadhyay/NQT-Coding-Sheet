import java.util.*;

class Solution {

    // 8 5 1 9 2 4
    void Selection(ArrayList<Integer> arr, int n) {
        for (int i = 0; i < n - 1; i++) {
            int min = i;
            for (int j = i + 1; j < n; j++) {
                if (arr.get(j) < arr.get(min)) {
                    min = j;
                }
            }
            if (min != i) {
                Collections.swap(arr, i, min);
            }
        }
    }
}

public class SelectionSort {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        ArrayList<Integer> arr = new ArrayList<>();
        for (int i = 0; i < n; i++) {
            arr.add(sc.nextInt());
        }

        Solution sol = new Solution();
        sol.Selection(arr, n);
        System.out.println(arr);
    }
}
