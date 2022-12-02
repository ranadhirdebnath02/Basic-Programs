/**
 * Write a program to convert 69 oF into its equivalent centigrade temperature.
 */

public class AssignmentProgram3 {
  public static void main(String[] args) {
    float f = 69;
    float c = (f - 32) / 9 * 5;
    System.out.println("69 deg F = " + c + " deg C");
  }
}
