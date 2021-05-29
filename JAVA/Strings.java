import java.util.Scanner;

//String are IMMUTABLE
public class Strings{
    public static void main(String[] args){
        //Declaration
        String name = new String("Ronald");
        String surname = "Weasly";
        System.out.println("Weasly King is: " + name + " " + surname);


        /*
        //User Input
        Scanner io = new Scanner(System.in);
        System.out.print("Enter the full name of brightest witch: ");
        String fullName2 = io.nextLine(); //Reads whole Line
        System.out.println("The brightest witch is: " + fullName2);

        System.out.print("Enter the full name of BOY who lived: ");
        String fullName = io.next(); //Reads till white space only
        System.out.println("The name you entered is: " + fullName);
        System.out.println("But you are supposed to enter full name.");
        */


        //String Methods
        int length = name.length(); //Returns the length
        System.out.println("Length of name " + name + " is: " + length);

        String lower = name.toLowerCase(); //Returns the copy of string in lowercase
        System.out.println("Lowercase: " + lower);

        String upper = name.toUpperCase(); //Returns the copy of string in uppercase
        System.out.println("Uppercase: " + upper);

        String nonTrimmedStr = "   Hey ";
        String trimmedStr = nonTrimmedStr.trim(); //Removes leading and trailing spaces
        System.out.println("Before Trim: " + nonTrimmedStr);
        System.out.println("After Trim: " + trimmedStr);

        //Declaration: String substring(int start, int end = len-1)
        //Returns a substring from start idx to end idx  
        System.out.println(name.substring(2, 4) + " " + name.substring(3)); //op: na ald

        //Declaration1: String replace(char old, char new)
        //Declaration2: String replace(String target, String replacement)
        //Replaces every old char with new char
        System.out.println("Harry".replace('r', 'p')); //op: Happy
        System.out.println("Harry".replace("rry", "ir")); //op: Hair

        //Declaration: boolean startsWith(String str)
        //Returns whether it starts with str
        System.out.println("Does Ronald starts with Ro: " + name.startsWith("Ro") );

        //Declaration: boolean endsWith(String str)
        //Returns whether it endss with str
        System.out.println("Does Ronald ends with R: " + name.endsWith("R") );
    
        //Declaration: char charAt(int idx)
        //Returns the character present at index idx
        System.out.println("Char at index 3 in Hermione is: " + "Hermione".charAt(3));

        //

    }
}