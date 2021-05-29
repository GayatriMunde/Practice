import java.util.Scanner;

public class Calculator{
    public static void main(String[] args){
        Scanner io = new Scanner(System.in);
        float sum = 0;

        System.out.print("Enter Marks of Subject: ");
        for (int i = 0; i < 5; i++){
            float marks = io.nextFloat();
            sum += marks;
        }

        float percentage = (sum * 100) / 500;
        System.out.print("Percentages are: ");
        System.out.println(percentage);
    }
};