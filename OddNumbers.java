/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author User
 */
public class OddNumbers {

    public static void main(String[] args) {
        int l = 3, r = 10;
        int[] array = oddNumbers(l,r);
        for(int x: array){
            System.out.print(x + " ");
        }
    }

    static int[] oddNumbers(int l, int r) {
        int size = (r - l) + 1, x = 0, y = 0;
        int array[] = new int[size];
        int count = 0;
        while (l <= r) {
            array[x] = l;
            x++;
            if (l % 2 == 1) {
                count++;
            }
            l++;
        }
        int oddValues[] = new int[count];
        for (int odd : array) {
            if (odd % 2 == 1) {
                oddValues[y] = odd;
                y++;
            }
        }
        return oddValues;
    }
}
