import java.util.Scanner;

//Method: A function written inside a class
//Function: A piece of code which can be used repeatedly
public class Methods{
    static void isNegative(int num){
        if (num < 0)
            System.out.println(num + " is a negative integer.");
        else
            System.out.println(num + " is a positive integer.");
    }
    
    static boolean isOdd(int num){
        if (num % 2 == 0)
            return false;
        return true;
    }

    boolean isPrime(int num){
        if (num <= 1)
            return false;
        
        if (num == 2)
            return true;

        if (num < 9 && num % 2 != 0)
            return true;

        if (num % 2 == 0 || num % 5 == 0)
            return false;

        int n = 7;
        while(n * n < num){
            if (num % n == 0)
                return false;
            n += 2;
        }

        return true;
    }

    //Recursive method
    static int getFactorial(int num){
        if (num <= 1)
            return 1;
        return num * getFactorial(num-1);
    }
    
    public static void main(String[] args){
        Scanner io = new Scanner(System.in);
        System.out.print("Enter a number: ");
        int num = io.nextInt();


        //Calling static method
        isNegative(num);    //void returntype;
        boolean condition = isOdd(num);
        if (condition)
            System.out.println(num + " is a odd number.");
        else
            System.out.println(num + " is an even number.");
         

        //Method invocation using object creation
        Methods obj = new Methods();
        boolean condition2 = obj.isPrime(num);
        if (condition2)
            System.out.println(num + " is a prime number.");
        else
            System.out.println(num + " is not a prime number.");
    
    
        //Recursive method
        System.out.println("Factorial of " + num + " is " + getFactorial(num));

    }
}