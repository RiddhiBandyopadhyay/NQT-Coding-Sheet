import java.util.*;

class Solution {

    // 8 5 1 9 2 0 4
    void Shift(ArrayList<Integer> arr, int n) {
        int temp = 0;
        for (int i = 1; i < n; i++) {
            temp = arr.get(i);
            int j = i - 1;
            while (j >= 0 && arr.get(j) > temp) {
                arr.set(j + 1, arr.get(j));
                j--;
            }

            arr.set(j + 1, temp);
        }
    }
}

public class IntertionSort {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        ArrayList<Integer> arr = new ArrayList<>();
        for (int i = 0; i < n; i++) {
            arr.add(sc.nextInt());
        }

        Solution sol = new Solution();
        sol.Shift(arr, n);
        System.out.println(arr);
    }
}
