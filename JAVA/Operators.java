public class Operators{
    public static void main(String[] args){
        //Assignment Operator
        int num1 = 25;
        int num2 = 10;
        num1 += 10;
        num2 -= 5;
        System.out.println("Numbers are: " + num1 + " and " + num2);

        //Arithmatic Operators
        System.out.println("Sum: " + (num1 + num2));
        System.out.println("Difference: " + (num1 - num2));
        System.out.println("Product: " + (num1 * num2));
        System.out.println("Division: " + (num1 / num2));
        System.out.println("Increment: " + num1++);
        System.out.println("Decrement: " + num2--);
        System.out.println("Modulo: " + (num1 % num2));

        //Comparison Operator
        System.out.println("Is equal: " + (num1 == num2));
        System.out.println("Is num1 greater than equal to num2: " + (num1 >= num2));
        System.out.println("Is num1 less than equal to num2: " + (num1 <= num2));

        //Logical Operator: && -> AND, || -> OR, ! -> NOT

        //Bitwise Operator
        System.out.println("Bitwise AND: " + (num1 & num2));
        System.out.println("Bitwise OR: " + (num1 | num2));
    }
}