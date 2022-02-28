import java.util.*;

class Solution {
    void Bubble(ArrayList<Integer> arr, int n) {
        for (int i = 0; i < n - 1; i++) {
            Boolean check = false;
            for (int j = 0; j < n - i - 1; j++) {
                if (arr.get(j) > arr.get(j + 1)) {
                    Collections.swap(arr, j, j + 1);
                    check = true;
                }
            }

            if (!check)
                break;
        }
    }
}

public class BubbleSort {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        ArrayList<Integer> arr = new ArrayList<>();
        for (int i = 0; i < n; i++) {
            arr.add(sc.nextInt());
        }

        Solution sol = new Solution();
        sol.Bubble(arr, n);
        System.out.println(arr);
    }
}