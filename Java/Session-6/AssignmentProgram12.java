/**
 * Write a program to display numbers fro m 1 to 50 using for, while and do
 * -while loop
 */

public class AssignmentProgram12 {
  public static void main(String[] args) {
    System.out.println("1 to 50 using while loop");
    int x = 1;
    while (x <= 50) {
      System.out.print(x + " ");
      x++;
    }

    System.out.println("\n-----------------------------------------------");

    System.out.println("1 to 50 using do-while loop");
    x = 1;
    do {
      System.out.print(x + " ");
      x++;
    } while (x <= 50);
  }
}
