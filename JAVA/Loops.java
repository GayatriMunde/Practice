//Loops: Helps to execute the same line of code n times

public class Loops{
    public static void main(String[] args){
        //While loop
        System.out.println("While loop, break & Contiue");
        int a = 4;
        while(a > 0){
            System.out.println("Value of a: " + a--);
            if (a == 2){
                System.out.println("Moving to next iteration.");
                continue; //ignores the later part nad immidetly moves to next itr
            }

            System.out.println("The 2nd statement");
            System.out.println("The 3rd statement");
            
            if (a == 1){
                System.out.println("Breaking loop");
                break; //loop is terminated no matter what is given condition
            }
        }


        //do-while loop
        //Do will execute without checking cond of while loop
        System.out.println("\n\ndo while loop");
        int b = 4;
        do{
            System.out.println("Value of b: " + b++);
        }while(b > 5);
        

        //For loop
        //Two semicolons are must
        System.out.println("\n\nFor loop");
        for (int i = 0; i < 5; i++){
            System.out.println("Value of i: "+ i);
        }
    }
}