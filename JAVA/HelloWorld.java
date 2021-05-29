//Class name must be same as file name
public class HelloWorld{
    //The main() method is the entry point
    //into the java application
    public static void main(String[] args){
        System.out.printf("Hello, World!\n");
        System.out.print("Java here\n"); 
        System.out.println("I'm from Java Island.");
        //printf, print: pointer remains on the same line
        //println: pointer enters the new line

        //Same as C language
        System.out.println("Statements with format specifiers: ");
        System.out.printf("%dst alphabet is %c\n", 1, 'a');
    }
}