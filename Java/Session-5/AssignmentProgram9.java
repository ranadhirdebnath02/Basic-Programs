
/**
 * Re-write the above program using if -else-if construct
 * (Session-4, AssignmentProgram8.java)
 */

import java.util.Scanner;

public class AssignmentProgram9 {
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
