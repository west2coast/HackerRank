/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author User
 */
public class FirstNonrepeat {

    public static void main(String[] args) {
        String s = "mnonm";
        int count = 0;
        boolean found = false;
        while ((count < s.length()) && (found != true)) {
            char letter = s.charAt(count);

            int countLetter = 0;
            for (int x = 0; x < s.length(); x++) {
                if ((s.charAt(x) == letter) && (x != count)) {
                    countLetter++;
                }
            }
            if (countLetter == 0) {
                String t = Character.toString(letter);
                System.out.println(t);
            }

            count++;
        }
    }
}

