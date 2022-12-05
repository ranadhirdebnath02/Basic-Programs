
/**
 * Accept student_name and marks from keyboard and display their performance
 * according to the following conditions:
 * MARKS Performance
 * <50 Fair
 * >=50 and <75 Good
 * >=75 and <85 Very Good
 * >=85 Excellent
 */

import java.util.Scanner;

public class AssignmentProgram8 {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    System.out.print("Enter your name: ");
    String name = sc.nextLine();
    System.out.print("Enter marks obtained: ");
    float mark = sc.nextFloat();
    System.out.println("\nStudent Name: " + name);
    if (mark >= 85) {
      System.out.println("Performance: Excellent");
    } else if (mark >= 75 && mark < 85) {
      System.out.println("Performance: Very Good");
    } else if (mark >= 50 && mark < 75) {
      System.out.println("Performance: Good");
    } else {
      System.out.println("Performance: Fair");
    }
    sc.close();
  }
}
