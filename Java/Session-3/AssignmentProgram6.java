/**
 * Define the following variables and evaluate the following expressions:
 * if w=100, x=10, y=5, z=2 then w*{(x/y)%z}=?
 */

public class AssignmentProgram6 {
  public static void main(String[] args) {
    int w = 100, x = 10, y = 5, z = 2;
    int res = w * ((x / y) % z);
    System.out.println(res);
  }
}
