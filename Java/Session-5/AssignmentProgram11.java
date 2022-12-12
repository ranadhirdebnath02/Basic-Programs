
/**
 * Using if-else statements determine the season of your current month.
 */

import java.util.Scanner;

public class AssignmentProgram11 {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    System.out.print("Enter current month: ");
    String currentMonth = sc.next();
    System.out.print("Current Season:- ");
    if (currentMonth.toLowerCase().equals("january")) {
      System.out.println("Winter");
    } else if (currentMonth.toLowerCase().equals("february")) {
      System.out.println("Spring");
    } else if (currentMonth.toLowerCase().equals("march")) {
      System.out.println("Spring");
    } else if (currentMonth.toLowerCase().equals("april")) {
      System.out.println("Summer");
    } else if (currentMonth.toLowerCase().equals("may")) {
      System.out.println("Summer");
    } else if (currentMonth.toLowerCase().equals("june")) {
      System.out.println("Summer");
    } else if (currentMonth.toLowerCase().equals("july")) {
      System.out.println("Monsoon");
    } else if (currentMonth.toLowerCase().equals("august")) {
      System.out.println("Monsoon");
    } else if (currentMonth.toLowerCase().equals("september")) {
      System.out.println("Monsoon");
    } else if (currentMonth.toLowerCase().equals("october")) {
      System.out.println("Autumn");
    } else if (currentMonth.toLowerCase().equals("november")) {
      System.out.println("Autumn");
    } else if (currentMonth.toLowerCase().equals("december")) {
      System.out.println("Winter");
    }
    sc.close();
  }
}
