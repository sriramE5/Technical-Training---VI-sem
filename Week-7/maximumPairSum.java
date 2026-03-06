import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();

        while (t-- > 0) {
            int n = scanner.nextInt();
            int[] a = new int[n];

            for (int i = 0; i < n; i++) {
                a[i] = scanner.nextInt();
            }

            int first = Integer.MIN_VALUE;
            int second = Integer.MIN_VALUE;

            for (int i = 0; i < n; i++) {
                if (a[i] > first) {
                    if (a[i] != first) {
                        second = first;
                    }
                    first = a[i];
                } 
                else if (a[i] > second && a[i] != first) {
                    second = a[i];
                }
            }

            System.out.println(first + second);
        }

        scanner.close();
    }
}
