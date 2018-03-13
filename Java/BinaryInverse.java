
import java.lang.Math;
import java.util.*;

public class BinaryInverse {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int userInput = input.nextInt();
        int x = -1;
        double value = 0;

        while (value < userInput) {
            x++;
            value = Math.pow(2, x);
        }

        int size = x, sum = 0, invSum = 0;
        int[] bit = new int[size];
        int[] inverse = new int[size];

        for (int m = 0; m < size; m++) {
            x--;
            value = Math.pow(2, x);

            if ((value + sum) <= userInput) {
                sum += value;
                bit[m] = 1;
                inverse[m] = 0;
            } else {
                bit[m] = 0;
                inverse[m] = 1;
                invSum += value;
            }

        }

        System.out.print("Binary of " + userInput + ": ");
        for (int y : bit) {
            System.out.print(y);
        }
        System.out.print("\nInverse of Binary: ");
        for (int y : inverse) {
            System.out.print(y);
        }
        System.out.println("\nInverse value: " + invSum);
    }
}
