import java.util.Scanner;

public class PassFail{
    public static void main(String[] args){
        Scanner io = new Scanner(System.in);
        System.out.print("Enter number of total subjects: ");
        int total = io.nextInt();

        System.out.print("Enter the max marks for test: ");
        float maxMarks = io.nextFloat();

        boolean isFail = false;
        float sum = 0;
        float passingMarks = (33 / 100) * maxMarks;
        System.out.println("Enter Marks of each subject.");
        for (int i = 0; i < total; i++){
            float marks = io.nextFloat();
            sum += marks;
            if (marks < passingMarks){
                isFail = true;
            }
        }

        float percentage = (sum * 100) / (maxMarks * total);
        if (percentage < 45.00 || isFail){
            System.out.println("You have got " + percentage + "% and you have not passed.");
        }
        else{
            System.out.println("You have passed the test.");
        }
    }
}