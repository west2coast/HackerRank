
import java.util.*;

public class HourGlass {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int arr[][] = new int[6][6];
        int max = 0;
        for (int y = 0; y < 6; y++) {
            for (int x = 0; x < 6; x++) {
                arr[y][x] = in.nextInt();
            }
        }
        for (int y = 0; y < 6; y++) {
            for (int x = 0; x < 6; x++) {
                if (inBounds(x, y, 6) == true) {
                    int sum = Sum(arr, x, y);
                    if (x == 0 && y == 0) {
                        max = sum;
                    } else {
                        max = Max(sum, max);
                    }
                }
            }
        }
        System.out.println(max);
    }

    static boolean inBounds(int x, int y, int size) {
        boolean check = false;
        if (x == 0) {
            if ((x + 1 < size && x + 1 >= 0) && (x + 2 < size && x + 2 >= 0)
                    && (y + 1 < size && y + 1 >= 0) && (y + 2 < size && y + 2 >= 0)) {
                check = true;
            }
        } else if ((x - 1 < size && x - 1 >= 0) && (x + 1 < size && x + 1 >= 0)
                && (y + 1 < size && y + 1 >= 0) && (y + 2 < size && y + 2 >= 0)) {
            check = true;
        }
        return check;
    }

    static int Sum(int arr[][], int x, int y) {
        int sum = 0, a = 0, b = 0, c = 0, d = 0, e = 0, f = 0, g = 0;
        if (x == 0) {
            a = arr[y][x];
            b = arr[y][x + 1];
            c = arr[y][x + 2];
            d = arr[y + 1][x + 1];
            e = arr[y + 2][x];
            f = arr[y + 2][x + 1];
            g = arr[y + 2][x + 2];

        } else {
            a = arr[y][x - 1];
            b = arr[y][x];
            c = arr[y][x + 1];
            d = arr[y + 1][x];
            e = arr[y + 2][x - 1];
            f = arr[y + 2][x];
            g = arr[y + 2][x + 1];
        }
        sum = a + b + c + d + e + f + g;
        return sum;
    }

    static int Max(int sum, int max) {
        if ((max < 0) && (sum < 0)) // both sum and max are negative
        {
            if ((sum * -1) < (max * -1)) {
                max = sum;
            }
        } else if (sum > max) {
            max = sum;
        }

        return max;
    }
}
