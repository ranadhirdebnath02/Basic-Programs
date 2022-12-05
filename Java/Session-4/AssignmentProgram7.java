
/**
 * Write a program to check a specified number whether it is odd or even
 */

import java.util.Scanner;

public class AssignmentProgram7 {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    System.out.print("Enter any integer: ");
    int num = sc.nextInt();
    if (num % 2 == 0) {
      System.out.println(num + " is even");
    } else {
      System.out.println(num + " is odd");
    }
    sc.close();
  }
}
