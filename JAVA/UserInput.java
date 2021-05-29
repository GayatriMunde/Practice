//To read i/o from keyboard Scanner class is used
import java.util.Scanner;

public class UserInput{
    public static void main(String[] args){
        System.out.println("Taking the input from user.");
        
        //Creating the new object "io" of class Scanner
        //System.in allows to take input from keyboard
        Scanner io = new Scanner(System.in);

        System.out.print("Enter Number: ");
        int num = io.nextInt(); //using the method with help of obj
        System.out.print("The number is: ");
        System.out.println(num);

        System.out.print("Enter name: ");
        String str_ = io.next(); //reads till whitespace only
        System.out.print("The name is: ");
        System.out.println(str_);

        System.out.print("Enter line: ");
        String line_ = io.nextLine(); //reads whole line
        System.out.println(line_);
    }
}