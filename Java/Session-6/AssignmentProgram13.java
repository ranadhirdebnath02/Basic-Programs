
/**
 * Write a program to display total number of vowels in a string
 */

import java.util.Scanner;

public class AssignmentProgram13 {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    System.out.print("Enter any sentence: ");
    String line = sc.nextLine();
    int vowelCount = 0;

    char x;
    for (int i = 0; i < line.length(); i++) {
      x = line.charAt(i);
      if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u') {
        vowelCount++;
      }
    }

    // advance for loop implementation
    // for (char x : line.toLowerCase().toCharArray()) {
    // if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u') {
    // vowelCount++;
    // }
    // }

    System.out.println("Total Vowels: " + vowelCount);
    sc.close();
  }
}
