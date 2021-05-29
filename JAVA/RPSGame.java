import java.util.Scanner;
import java.util.Random;

public class RPSGame{
    public static void main(String[] args){
        System.out.print("Rules\n1.The one max points win\n2.Order is: Rock > Scissor, Scissor > Paper, Paper > Rock\n\n");
        //System.out.println("To choose\n1.Rock: Enter 1\n2.Scissor: Enter 2\n3.Paper: Enter 3")

        Scanner io = new Scanner(System.in);
        System.out.print("Enter the number of rounds: ");
        int totalRounds = io.nextInt();

        int count = 0;
        Random random = new Random();  
        for (int i = 0; i < totalRounds; i++){
            System.out.println("To choose\nRock: Enter 1\nScissor: Enter 2\nPaper: Enter 3");
            System.out.print("Enter your choice(1/2/3): ");
            int user = io.nextInt();
            int choice = random.nextInt(3);
            
            switch(choice){
                case 1: 
                    System.out.println("My choice is Rock.");
                    break;
                case 2:
                    System.out.println("My choice is Scissor.");
                    break;
                case 3:
                    System.out.println("My choice is Paper.");
                    break;
            }

            boolean userWon = ((user == 1 && choice == 2) || (user == 2 && choice == 3) || (user == 3 && choice == 1));
            if (userWon){
                System.out.println("You got this mate!\n");
                count++;
            }
            else{
                System.out.println("Hehe, I got this.\n");
            }
        }

        System.out.println("You won " + count + " rounds out of " + totalRounds +".");
    }
}