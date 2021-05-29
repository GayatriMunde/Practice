public class ConditionalStatements{
    public static void main(String[] args){
        //If else statements
        int a = 2;
        boolean condition = (a > 3);
        if (condition){
            System.out.println("Condition is true.");
        }
        else if (a == 2){
            System.out.println("First condition is false, second is true.");
        }
        else{
            System.out.println("Condition is false.");
        }


        //Switch case
        //without break it'll execute every statement after true cond.
        int idx = 1;
        switch(idx){
            case 1:
                System.out.println("Idx is 1");
                break;
            case 2:
                System.out.println("Idx is 2");
                break;
            case 3:
                System.out.println("Idx is 3");
                break;
            case 4:
                System.out.println("Idx is 4");
                break;
            default:
                System.out.println("Idx is not from [1, 4]");
        
        
        //For Java version 13+
        //Enhanced switch
        String match = "3";
        switch(match){
            case "1"-> {
                System.out.println("We've got the match");
                System.out.println("In first place only");
                System.out.println("With idx being 1");
            }
            case "2" -> {
                System.out.println("We've got the match");
                System.out.println("With idx being 2");
            }
            case "3" -> {
                System.out.println("We've got the match");
                System.out.println("With idx being 2");
            }
            default -> System.out.println("Choose wisely there is no match!!");
        }
    }
}