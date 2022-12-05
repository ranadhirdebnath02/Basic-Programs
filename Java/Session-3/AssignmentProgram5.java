/**
 * Take a word (say “BRAINWARE”) as a command line argument and display it as
 * “Hello BRAINWARE”
 * 
 * Run this program from command line with atleast single argument, like
 * compile -> javac AssignmentProgram5.java
 * run -> java AssignmentProgram5 <your-input>
 */

public class AssignmentProgram5 {
  public static void main(String[] args) {
    System.out.println("Hello " + args[0]);
  }
}
